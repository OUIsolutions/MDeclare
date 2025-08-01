//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "imports/imports.api_define.h"
//silver_chain_scope_end
#include "../dependencies/CArgvParseOne.c"


int main(int argc, char *argv[]){
    CArgvParse args =newCArgvParse(argc,argv);

   const char *entrie = CArgvParse_get_arg(&args,0);
    if(entrie == NULL){
        fprintf(stderr,"No entry point provided.\n");
        return 1;
    }
    const char* outputs[] = {"output","out","o"};
    int total_output_flags = sizeof(outputs)/sizeof(char*);
    int flag_index = 0;
    const char *output = CArgvParse_get_flag(&args,outputs,total_output_flags,flag_index);
    printf("output: %s\n",output);
    return 0;

}