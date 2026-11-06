# 任务
.PHONY: all setup build

all: build

setup:
	meson setup --reconfigure builddir

build:
	meson compile -C builddir
