//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../imports/imports.api_declare.h"
//silver_chain_scope_end
 
void mdeclare_transform_content_with_stack (const char *content, CTextStack *final_content){
 long size = strlen(content);
    
    int bracket_count = 0;
    bool inside_string = false;
    bool inside_char = false;
    bool inside_comment = false;
    bool inside_multiline_comment = false;
    bool inside_preprocessor = false;
    bool inside_macro = false;
    int scape_count = 0;
    for(int i =0; i < size;i++){
        char current_char = content[i];
        if(i > 0){
            if(content[i - 1] == '\\'){
                scape_count++;
            } else {
                scape_count = 0;
            }
        }

        bool is_even = (scape_count % 2 == 0);
        
        if(inside_comment){
            if(current_char == '\n'){
                inside_comment = false;
            }
        }

        if(inside_multiline_comment){
            if(current_char == '*' && i + 1 < size && content[i + 1] == '/'){
                inside_multiline_comment = false;
            }
        }

        if(inside_string){
            if(current_char == '"' && is_even ){
             inside_string = false;
             if(bracket_count == 0){
                CTextStack_format(final_content,"\"");
             } 
            continue;

            }
        }

        if(inside_char){
            if(current_char == '\'' && is_even ){
                inside_char = false;
                if(bracket_count == 0){
                    CTextStack_format(final_content,"'");
                }
                continue;
            }
        }

        if(inside_preprocessor){
            if(current_char == '\n'){
                inside_preprocessor = false;
            }
        }

 
        bool inside_code = (!inside_string && !inside_char && !inside_comment && !inside_multiline_comment && !inside_preprocessor);
        /*
        // Print all values
        printf("char: '%c', bracket: %d, string: %d, char: %d, comment: %d, multiline: %d, preproc: %d, macro: %d, scape: %d, code: %d\n", 
               current_char, bracket_count, inside_string, inside_char, inside_comment, inside_multiline_comment, 
               inside_preprocessor, inside_macro, scape_count, inside_code);
        */
        if (inside_code){

            if (current_char == '{'){
                bracket_count++;
            }  
            if(current_char == '}'){
                bracket_count--;
            }

            if(current_char == '/' && i + 1 < size && content[i + 1] == '/'){
                inside_comment = true;
            }

            if(current_char == '/' && i + 1 < size && content[i + 1] == '*'){
                inside_multiline_comment = true;
            }

            if(current_char == '"'){
                inside_string = true;
            } 
            if(current_char == '\'' ){
                inside_char = true;
            } 
            if(current_char == '#' ){
                inside_preprocessor = true;
            } 
   
        }


        if(bracket_count == 0 && current_char != '}' ){
            CTextStack_format(final_content,"%c", current_char);
        }
        if(bracket_count == 0 && current_char == '}'){
            CTextStack_format(final_content,";");
        }

      

    }
}

 char *mdeclare_transform_content (const char *content){

    CTextStack *final_content  = newCTextStack_string_empty();
    mdeclare_transform_content_with_stack(content, final_content);
    return CTextStack_self_transform_in_string_and_self_clear(final_content);
}