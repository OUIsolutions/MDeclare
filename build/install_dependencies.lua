function Install_dependencies()
    local hasher = darwin.dtw.newHasher()
    hasher.digest_folder_by_content("dependencies")
    local TARGET_HASH = "7a793ac3ef82756bfd6953109a7916d31163abacf496088b76bd7641cf9d7bca"
    if hasher.get_value() == TARGET_HASH then
        return
    end
    local comands = {
        "mkdir -p dependencies",
        "curl -L https://github.com/OUIsolutions/CTextEngine/releases/download/v2.002/CTextEngine.h -o dependencies/CTextEngine.h",
        "curl -L https://github.com/OUIsolutions/DoTheWorld/releases/download/v8.002/doTheWorld.h -o dependencies/doTheWorld.h",
        "curl -L https://github.com/OUIsolutions/Universal-Garbage-Colector/releases/download/v2.003/UniversalGarbage.h -o dependencies/UniversalGarbage.h",
        "curl -L https://github.com/OUIsolutions/C-argv-parser/releases/download/0.0.2/CArgvParseOne.c -o  dependencies/CArgvParseOne.c",
    }
    for _, command in ipairs(comands) do
        os.execute(command)
    end
    local new_hasher = darwin.dtw.newHasher()
    new_hasher.digest_folder_by_content("dependencies")
    print("new hasher is: ", new_hasher.get_value())
end