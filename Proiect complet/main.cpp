#include <SFML/Graphics.hpp>
using namespace sf;

const float pi = 3.1415926535897932384626;

int main(){
    int fps = 60;
    float viteza = 2*pi / (fps);
    float dt = 0.0;

    //int w = VideoMode::getDesktopMode().width;
    //int h = VideoMode::getDesktopMode().height;
    int w = 1280, h = 720;

    Shader shader;
    shader.loadFromFile("shader.frag", Shader::Type::Fragment);
    shader.setUniform("iResolution", Vector2f(w, h));

    RectangleShape drept({w, h});

    RenderWindow window(VideoMode({w, h}), "Animatie note muzicale", Style::Close);
    window.setFramerateLimit(fps);
    //window.draw(drept, &shader);
    //window.display();
    while(window.isOpen()){
        while(const std::optional event = window.pollEvent()){
            if(event->is<sf::Event::Closed>()){
                window.close();
            }
        }

        //window.clear();
        window.draw(drept, &shader);
        window.display();

        dt += viteza;
        shader.setUniform("dt", dt);
    }

    return 0;
}
