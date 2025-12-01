// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMips",
    products: [
        .library(name: "TreeSitterMips", targets: ["TreeSitterMips"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMips",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterMipsTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMips",
            ],
            path: "bindings/swift/TreeSitterMipsTests"
        )
    ],
    cLanguageStandard: .c11
)
