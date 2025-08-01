//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../imports/imports.api_declare.h"
//silver_chain_scope_end

 char *mdeclare_transform_content (const char *content){

    CTextStack *final_content  = newCTextStack_string_empty();
    long size = strlen(content);
    for(int i =0; i < size;i++){
        
    }
    return CTextStack_self_transform_in_string_and_self_clear(final_content);
}