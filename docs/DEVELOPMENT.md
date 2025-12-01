# Development

This grammar is best built with `tree-sitter-cli@0.24.7` (Some package managers refer to it as `tree-sitter` instead of `tree-sitter-cli`).

## Building with npm

First, install the dependencies:
```
npm install
```
This will install `tree-sitter-cli`.

Now you can generate the grammar:
```
npx tree-sitter generate
```

Test the grammar:
```
npx tree-sitter test
```

And parse files:
```
npx tree-sitter parse file.asm
```
