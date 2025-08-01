//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../imports/imports.cli_dependencies.h"
//silver_chain_scope_end

int main(){
    char *content = dtw_load_string_file_content("exemple.c");
    char *output = mdeclare_transform_content(content);
    dtw_write_string_file_content("output.c", output);
    free(content);
    free(output);
    return 0;

}