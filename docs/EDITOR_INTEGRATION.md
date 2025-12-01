# Editor Integration

## NeoVim

To use `tree-sitter-mips` in NeoVim, use the plugin [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter).

>[!IMPORTANT]
> This will **only** work on the **[master branch of nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)** and not on the **main branch**!

1. Add this to your `nvim-treesitter` config:
  ```lua
    local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
    parser_config.mips = {
        install_info = {
            url = 'https://github.com/omeyenburg/tree-sitter-mips',
            branch = 'main',
            files = { 'src/parser.c', 'src/scanner.c' },
            generate_requires_npm = false,
            requires_generate_from_grammar = false,
        },
        filetype = { 'asm', 'vmasm' },
    }
  ```
2. Run `:TSInstall mips` to install or update the parser.
3. Copy the queries to enable highlighting:

**Linux/Unix:**
```sh
mkdir -p "$XDG_CONFIG_HOME/nvim/queries/mips"
curl -L -o "$XDG_CONFIG_HOME/nvim/queries/mips/highlights.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/highlights.scm
curl -L -o "$XDG_CONFIG_HOME/nvim/queries/mips/indents.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/indents.scm
```

**Windows (cmd.exe):**
```sh
mkdir "%LOCALAPPDATA%\nvim\queries\mips"
curl -L -o "%LOCALAPPDATA%\nvim\queries\mips\highlights.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/highlights.scm
curl -L -o "%LOCALAPPDATA%\nvim\queries\mips\indents.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/indents.scm
```
