# imgui-template
Dear ImGui app following Zen Sepiol's YT tutorial

## Setup



```shell
# 1. Install dependencies
$ sudo apt install meson ninja-build xorg-dev libglfw3-dev libvulkan-dev

# 2. Clone this repository and clone submodules
$ git clone https://github.com/delion264/imgui-template.git
$ git submodule init
$ git submodule update

# 3. Configure source directory and bundle dependencies
$ cd imgui-template
$ meson build --native-file=native.build

# 4. Compile targets specified in meson.build
$ ninja -C build imgui_app_example
$ ninja -C build app_framework

# 5. Run the binaries from the build directory
$ ./imgui_app_example 
$ ./app_framework
```
