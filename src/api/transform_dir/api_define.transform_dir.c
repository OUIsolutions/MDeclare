//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../imports/imports.api_declare.h"
//silver_chain_scope_end

char * transform_dir(const char *dir_path,bool include_path, const char *starts_with,const char *ends_with) {

     CTextStack *final_content = newCTextStack_string_empty();

    DtwStringArray *files = dtw_list_files_recursively(dir_path, DTW_NOT_CONCAT_PATH);
    for(int i =0; i < files->size; i++){
        char *current_file = files->strings[i];
        if(starts_with){
            DtwPath *path = newDtwPath(current_file);
            char *pure_filename = DtwPath_get_full_name(path);
            if(!dtw_starts_with(pure_filename, starts_with)){
                DtwPath_free(path);
                continue;
            }
            DtwPath_free(path);

        }
        if(ends_with){
            if(!dtw_ends_with(current_file, ends_with)){
                continue;
            }
        }
        if(include_path){
             CTextStack_format(final_content, "//%s\n", current_file);
        }
        char *concatenated = dtw_concat_path(dir_path, current_file);
        char *content = dtw_load_string_file_content(concatenated);
        free(concatenated);
        if(content == NULL){
            fprintf(stderr, "Failed to load content from '%s'.\n", current_file);
            continue;
        }
        mdeclare_transform_content_with_stack(content, final_content);
        free(content);
    }
    DtwStringArray_free(files);
    return CTextStack_self_transform_in_string_and_self_clear(final_content);


}