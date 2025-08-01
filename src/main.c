//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "imports/imports.api_define.h"
//silver_chain_scope_end
#include "../dependencies/CArgvParseOne.c"


int main(int argc, char *argv[]){
    CArgvParse args =newCArgvParse(argc,argv);

   const char *entrie = CArgvParse_get_arg(&args,1);
    if(entrie == NULL){
        fprintf(stderr,"No entry point provided.\n");
        return 1;
    }

    if(strcmp(entrie,"version") == 0){
        printf("MDeclare  1.0.0\n");
        return 0;
    }
    const char *VERSION[] = {"version","v"};
    if(CArgvParse_is_flags_present(&args,VERSION,sizeof(VERSION)/sizeof(char*)) ){
        printf("MDeclare 1.0.0\n");
        return 1;
    }


    int entrie_type = dtw_entity_type(entrie);
    if(entrie_type == DTW_NOT_FOUND){
        fprintf(stderr,"Entrie point '%s' not found.\n",entrie);
        return 1;
    }

    const char* OUTPUTS[] = {"output","out","o"};
    int total_output_flags = sizeof(OUTPUTS)/sizeof(char*);
    int flag_index = 0;
    const char *output = CArgvParse_get_flag(&args,OUTPUTS,total_output_flags,flag_index);

    if(output == NULL){
        fprintf(stderr,"No output flag provided.\n");
        return 1;
    }
    if(entrie_type == DTW_FILE_TYPE){
        char *content = dtw_load_string_file_content(entrie);
        if(content == NULL){
            fprintf(stderr,"Failed to load content from '%s'.\n", entrie);
            return 1;
        }
        char *result = mdeclare_transform_content(content);
        dtw_write_string_file_content(output, result);
        free(content);
        free(result);
    }
    if(entrie_type == DTW_FOLDER_TYPE){
        const char  *STARTS_WITH[] = {"startswith","sw"};
        const char *starts_with = CArgvParse_get_flag(&args,STARTS_WITH,sizeof(STARTS_WITH)/sizeof(char*),0);
        const char  *ENDS_WITH[] = {"endswith","ew"};
        const char *ends_with = CArgvParse_get_flag(&args,ENDS_WITH,sizeof(ENDS_WITH)/sizeof(char*),0);

        char *result = transform_dir(entrie, output, starts_with, ends_with);
        dtw_write_string_file_content(output, result);
        free(result);
    }



    return 0;

}