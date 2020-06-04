load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "b",
    srcs = ["b.cc"],
    hdrs = ["b.h"],
    deps = [
        "//src/b:exceptions",
        "@a//src/a",
    ],
)

cc_library(
    name = "exceptions",
    hdrs = ["exceptions.h"],
)
