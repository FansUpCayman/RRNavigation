// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
  name: "RRNavigation",
  products: [
    .library(name: "RRNavigation", targets: ["RRNavigationTargets"])
  ],
  dependencies: [
  ],
  targets: [
    .binaryTarget(
      name: "RRNavigation",
      path: "Frameworks/RRNavigation.xcframework"
    ),
    .target(
      name: "RRNavigationTargets",
      dependencies: [
        .target(name: "RRNavigation")
      ],
      path: "Sources"
    )
  ]
)
