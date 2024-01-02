#ifndef FLAPPY_HPP_INCLUDED
#define FLAPPY_HPP_INCLUDED
#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

class FlappyBird{
    std::shared_ptr<sf::RenderWindow> window;
    float gravity, frame, space;
    int count, score;
    bool gameover, add;
    sf::Texture bg, flappy, pipe;
    sf::Font font;
    sf::Text txt_score, txt_gameover;
    std::shared_ptr<sf::Sprite> background, bird, pipeBottom, pipeTop;
    std::vector<sf::Sprite> pipes;

    protected:
        void events();
        void draw();
    public:
        FlappyBird();
        void run();
        void game();
        void movePipes();
        void setAnimeBird();

};
#endif // FLAPPY_HPP_INCLUDED
