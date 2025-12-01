import XCTest
import SwiftTreeSitter
import TreeSitterMips

final class TreeSitterMipsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mips())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading MIPS grammar")
    }
}
