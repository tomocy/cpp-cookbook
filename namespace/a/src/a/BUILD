load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "a",
    srcs = ["a.cc"],
    hdrs = ["a.h"],
    visibility = [
        "//visibility:public",
    ],
    deps = [
        "//src/a:exceptions",
    ],
)

cc_library(
    name = "exceptions",
    hdrs = ["exceptions.h"],
)
