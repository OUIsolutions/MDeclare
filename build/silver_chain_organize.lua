
local silver_chain_organize_done = false
function silver_chain_organize()
    if silver_chain_organize_done then
        return
    end
    silver_chain_organize_done = true


    local content = darwin.mdeclare.transform_dir({
        dir="src",
        startswith="api_define",
        endswith=".c",
    })

    darwin.dtw.write_file("src/api_declare.all.h", content)
    darwin.silverchain.remove("src/api_declare.all.h")


    darwin.silverchain.generate({
        src = "src",
        project_short_cut = "MDeclare",
        tags = { 
            "api_dependencies",
        "api_declare",
        "api_define",
        "cli_dependencies",
        "cli_type",
        "cli_globals",
        "cli_declare",
        "cli_define"
    }})
end 