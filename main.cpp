#include "app_design.hpp"

class MyApp : public App<MyApp>
{
public:
    MyApp() = default;
    ~MyApp() = default;

    void StartUp()
    {
    }

    void Update()
    {
        ImPlot::ShowDemoWindow();

        // Use a Begin/End pair to create a named window.
        {
            static float f = 0.0f;
            static int counter = 0;

            ImGui::Begin("RX0"); // Create a window called "Hello, world!" and append into it.

            ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }

        // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin("Another Window", &show_another_window); // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text("Hello from another window!");
            if (ImGui::Button("Close Me"))
                show_another_window = false;
            ImGui::End();
        }
    }

private:
    bool show_demo_window = true;
    bool show_another_window = false;
};

int main(int, char **)
{
    MyApp app;
    app.Run();

    return 0;
}