# Language Integration

## JavaScript

Install dependencies:
```sh
npm install tree-sitter@^0.25.0 tree-sitter-mips
```

**Example:**
```javascript
const Parser = require('tree-sitter');
const mips = require('tree-sitter-mips');

const code = "li $t0, 2";

const parser = new Parser();
parser.setLanguage(mips);

const tree = parser.parse(code);

console.log(tree.rootNode.toString());
// Output: (program (instruction opcode: (opcode) operands: (operands (register) (decimal))))
```

## Python

Install dependencies:
```sh
pip install tree-sitter tree-sitter-mips
```

**Example:**
```python
import tree_sitter
from tree_sitter_mips import language

source = b"li $t0, 2"

parser = tree_sitter.Parser()
parser.language = tree_sitter.Language(language())
tree = parser.parse(source)

def to_string(node):
    return "(" + " ".join([node.type, *map(to_string, node.named_children)]) + ")"

print(to_string(tree.root_node))
# Output: (program (instruction (opcode) (operands (register) (decimal))))
```

## Rust

Requires `tree-sitter` version `0.23.0` or higher.

Add to `Cargo.toml`:
```toml
tree-sitter = "0.25.8"
tree-sitter-mips = "0.3.0"
```

**Example:**
```rust
use tree_sitter::Parser;

fn main() {
    let code = b"li $t0, 2";

    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_mips::LANGUAGE.into())
        .expect("Error loading MIPS parser");

    let tree = parser.parse(code, None).unwrap();

    println!("{}", tree.root_node().to_sexp());
    // Output: (program (instruction opcode: (opcode) operands: (operands (register) (decimal))))
}
```

## Go

Requires Go >=1.22.

Add to `go.mod`:
```gomod
require github.com/tree-sitter/go-tree-sitter v0.24.0
require github.com/omeyenburg/tree-sitter-mips v0.3.0
```

**Example:**
```go
package main

import (
    "fmt"

    tree_sitter "github.com/tree-sitter/go-tree-sitter"
    tree_sitter_mips "github.com/omeyenburg/tree-sitter-mips/bindings/go"
)

func main() {
    code := []byte("li $t0, 2")

    parser := tree_sitter.NewParser()
    defer parser.Close()
    parser.SetLanguage(tree_sitter.NewLanguage(tree_sitter_mips.Language()))

    tree := parser.Parse(code, nil)
    defer tree.Close()

    root := tree.RootNode()

    fmt.Println(root.ToSexp())
    // Output: (program (instruction opcode: (opcode) operands: (operands (register) (decimal))))
}
```

## C

You can find a template repository to use this grammar in C [here](https://github.com/omeyenburg/tree-sitter-mips-c-template).

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree-sitter-mips.h"
#include "tree_sitter/api.h"

int main(void) {
    TSParser* parser = ts_parser_new();
    ts_parser_set_language(parser, tree_sitter_mips());

    const char* code = "li $t0, 2";
    TSTree* tree = ts_parser_parse_string(parser, NULL, code, strlen(code));

    char* result = ts_node_string(ts_tree_root_node(tree));
    printf("%s\n", result);
    // Output: (program (instruction opcode: (opcode) operands: (operands (register) (decimal))))

    free(result);
    ts_tree_delete(tree);
    ts_parser_delete(parser);
    return 0;
}
```
