package tree_sitter_mips_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mips "github.com/omeyenburg/tree-sitter-mips/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mips.Language())
	if language == nil {
		t.Errorf("Error loading Mips grammar")
	}
}
