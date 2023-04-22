project('ImGui App', 'cpp')

cc = meson.get_compiler('cpp')

incdir = include_directories('libs/imgui/', 'libs/imgui/backends/')

glfw_lib = subproject('glfw').get_variable('glfw_dep')
gl = dependency('gl')
dl_dep = cc.find_library('dl', required : false)

files = files(
    'opengl_glfw_example.cpp',
    'libs/imgui/imgui.cpp',
    'libs/imgui/imgui_draw.cpp',
    'libs/imgui/imgui_tables.cpp',
    'libs/imgui/imgui_demo.cpp',
    'libs/imgui/imgui_widgets.cpp',
    'libs/imgui/backends/imgui_impl_glfw.cpp',
    'libs/imgui/backends/imgui_impl_opengl3.cpp',
)

executable('imgui_app_example', files, include_directories : incdir, dependencies : [glfw_lib, gl, dl_dep] )

files = files(
    'main.cpp',
    'libs/imgui/imgui.cpp',
    'libs/imgui/imgui_draw.cpp',
    'libs/imgui/imgui_tables.cpp',
    'libs/imgui/imgui_demo.cpp',
    'libs/imgui/imgui_widgets.cpp',
    'libs/imgui/backends/imgui_impl_glfw.cpp',
    'libs/imgui/backends/imgui_impl_opengl3.cpp',
)

executable('app_framework', files, include_directories : incdir, dependencies : [glfw_lib, gl, dl_dep])