#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

bool checkDraw(std::vector <std::vector<sf::CircleShape>>);
bool checkWinRed(std::vector <std::vector<sf::CircleShape>>&);
bool checkWinYellow(std::vector <std::vector<sf::CircleShape>>&);

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;

    sf::RenderWindow window(sf::VideoMode(700, 600), "Connect 4", sf::Style::Default, settings);
    sf::RectangleShape rectangle(sf::Vector2f(5, 600));
    sf::RectangleShape rectangle2(sf::Vector2f(5, 600));
    rectangle.setFillColor(sf::Color(255, 128, 0));
    rectangle2.setFillColor(sf::Color(255, 128, 0));
    std::vector <std::vector<sf::CircleShape>> ShapeVector;
    sf::CircleShape Blankshape(35);
    sf::CircleShape Redshape(35);
    sf::CircleShape Yellowshape(35);
    Blankshape.setFillColor(sf::Color::White);
    Blankshape.setOutlineThickness(2);
    Blankshape.setOutlineColor(sf::Color(41, 106, 149));
    Redshape.setFillColor(sf::Color::Red);
    Redshape.setOutlineThickness(2);
    Redshape.setOutlineColor(sf::Color(133, 0, 0));
    Yellowshape.setFillColor(sf::Color::Yellow);
    Yellowshape.setOutlineThickness(2);
    Yellowshape.setOutlineColor(sf::Color(133, 118, 0));
    sf::Text GameOverText;
    sf::Font font;
    int x = 15;
    int y = 10;
    int ycounter = 0;
    int xcounter = 0;
    int counter = 0;
    bool Player1Turn = true;
    int frameCounter = 0;
    bool gameOver = false;
    bool Player1Win = false;
    bool Player2Win = false;
    
    for (int i = 10; i < 600; i += 100)
    {
        std::vector<sf::CircleShape> temp;
        counter = 0;
        for (int j = 15; j < 700; j += 100)
        {
            temp.push_back(Blankshape);
            temp[counter].setPosition(sf::Vector2f(j, i));
            counter++;
        }
        ShapeVector.push_back(temp);
    }

    while (window.isOpen())
    {
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(47,125, 176));

        if (!gameOver && !Player1Win && !Player2Win)
        {
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                sf::Vector2i localPosition = sf::Mouse::getPosition(window);
                if (localPosition.x >= 0 && localPosition.x <= 100)
                {
                    rectangle.setPosition(0, 0);
                    rectangle2.setPosition(100, 0);
                    if (Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][0].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][0] = Redshape;
                                break;
                            } 
                        }
                        Player1Turn = false;
                        frameCounter = 0;
                    }
                    else if (!Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][0].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][0] = Yellowshape;
                                break;
                            } 
                        }
                        Player1Turn = true;
                        frameCounter = 0;
                    }
                }
                else if (localPosition.x > 100 && localPosition.x <= 200)
                {
                    rectangle.setPosition(200, 0);
                    rectangle2.setPosition(100, 0);
                    if (Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][1].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][1] = Redshape;
                                break;
                            } 
                        }
                        Player1Turn = false;
                        frameCounter = 0;
                    }
                    else if (!Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][1].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][1] = Yellowshape;
                                break;
                            } 
                        }
                        Player1Turn = true;
                        frameCounter = 0;
                    }
                }
                else if (localPosition.x > 200 && localPosition.x <= 300)
                {
                    rectangle.setPosition(200, 0);
                    rectangle2.setPosition(300, 0);
                    if (Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][2].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][2] = Redshape;
                                break;
                            } 
                        }
                        Player1Turn = false;
                        frameCounter = 0;
                    }
                    else if (!Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][2].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][2] = Yellowshape;
                                break;
                            } 
                        }
                        Player1Turn = true;
                        frameCounter = 0;
                    }
                }
                else if (localPosition.x > 300 && localPosition.x <= 400)
                {
                    rectangle.setPosition(400, 0);
                    rectangle2.setPosition(300, 0);
                    if (Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][3].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][3] = Redshape;
                                break;
                            } 
                        }
                        Player1Turn = false;
                        frameCounter = 0;
                    }
                    else if (!Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][3].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][3] = Yellowshape;
                                break;
                            } 
                        }
                        Player1Turn = true;
                        frameCounter = 0;
                    }
                }
                else if (localPosition.x > 400 && localPosition.x <= 500)
                {
                    rectangle.setPosition(400, 0);
                    rectangle2.setPosition(500, 0);
                    if (Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][4].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][4] = Redshape;
                                break;
                            } 
                        }
                        Player1Turn = false;
                        frameCounter = 0;
                    }
                    else if (!Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][4].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][4] = Yellowshape;
                                break;
                            } 
                        }
                        Player1Turn = true;
                        frameCounter = 0;
                    }
                }
                else if (localPosition.x > 500 && localPosition.x <= 600)
                {
                    rectangle.setPosition(600, 0);
                    rectangle2.setPosition(500, 0);
                    if (Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][5].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][5] = Redshape;
                                break;
                            } 
                        }
                        Player1Turn = false;
                        frameCounter = 0;
                    }
                    else if (!Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][5].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][5] = Yellowshape;
                                break;
                            } 
                        }
                        Player1Turn = true;
                        frameCounter = 0;
                    }
                }
                else if (localPosition.x > 600 && localPosition.x <= 700)
                {
                    rectangle.setPosition(600, 0);
                    rectangle2.setPosition(695, 0);
                    if (Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][6].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][6] = Redshape;
                                break;
                            } 
                        }
                        Player1Turn = false;
                        frameCounter = 0;
                    }
                    else if (!Player1Turn && frameCounter >= 1000)
                    {
                        for (int i = 5; i >= 0; i--)
                        {
                            if (ShapeVector[i][6].getFillColor() == sf::Color::White)
                            {
                                ShapeVector[i][6] = Yellowshape;
                                break;
                            } 
                        }
                        Player1Turn = true;
                        frameCounter = 0;
                    }
                }
                window.draw(rectangle2);
                window.draw(rectangle);
            }   

            frameCounter++;
            counter = 0;
            int jay = 15;
            int eye = 10;

            for (int i = 0; i < ShapeVector.size(); i++)
            {
                jay = 15;
                for (int j = 0; j < ShapeVector[i].size(); j++)
                {
                    ShapeVector[i][j].setPosition(sf::Vector2f(jay, eye));
                    window.draw(ShapeVector[i][j]);
                    jay += 100;
                }
                eye += 100;
            }
        }

        if (gameOver || Player1Win || Player2Win)
        {
            int jay = 15;
            int eye = 10;

            for (int i = 0; i < ShapeVector.size(); i++)
            {
                jay = 15;
                for (int j = 0; j < ShapeVector[i].size(); j++)
                {
                    ShapeVector[i][j].setPosition(sf::Vector2f(jay, eye));
                    window.draw(ShapeVector[i][j]);
                    jay += 100;
                }
                eye += 100;
            }

            if (!font.loadFromFile("ARCADE_I.TTF"))
            {
                std:: cout << "Fail to Load Font Texture" << std:: endl;
            }

            GameOverText.setFont(font);
            GameOverText.setFillColor(sf::Color::Green);
            GameOverText.setString("GAME OVER!");
            GameOverText.setPosition(sf::Vector2f(210.f, 275.f));
            window.draw(GameOverText);
        }




        Player1Win = checkWinRed(ShapeVector);
        Player2Win = checkWinYellow(ShapeVector);
        gameOver = checkDraw(ShapeVector);
        window.display();
    }

    

    return 0;
}

bool checkDraw(std::vector <std::vector<sf::CircleShape>> ShapeVector)
{
    for (int i = 0; i < ShapeVector.size(); i++)
    {
        for (int j = 0; j < ShapeVector[i].size(); j++)
        {
            if (ShapeVector[i][j].getFillColor() == sf::Color::White)
            {
                return false;
            }
        }
    }
    return true;
}

bool checkWinRed(std::vector <std::vector<sf::CircleShape>> &ShapeVector)
{
    for (int c = 0; c < 7; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Red)
            {
                if (ShapeVector[r + 1][c].getFillColor() == sf::Color::Red)
                {
                    if (ShapeVector[r + 2][c].getFillColor() == sf::Color::Red)
                    {
                        if (ShapeVector[r + 3][c].getFillColor() == sf::Color::Red)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 1][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 2][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 3][c].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r + 1][c].setOutlineThickness(5);
                            ShapeVector[r + 2][c].setOutlineThickness(5);
                            ShapeVector[r + 3][c].setOutlineThickness(5);
                            
                            return true;
                        }
                    }
                }
            }
        }
    }

    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Red)
            {
                if (ShapeVector[r][c + 1].getFillColor() == sf::Color::Red)
                {
                    if (ShapeVector[r][c + 2].getFillColor() == sf::Color::Red)
                    {
                        if (ShapeVector[r][c + 3].getFillColor() == sf::Color::Red)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r][c + 1].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r][c + 2].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r][c + 3].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r][c + 1].setOutlineThickness(5);
                            ShapeVector[r][c + 2].setOutlineThickness(5);
                            ShapeVector[r][c + 3].setOutlineThickness(5);

                            return true;
                        }
                    }
                }
            }
        }
    }

    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Red)
            {
                if (ShapeVector[r + 1][c + 1].getFillColor() == sf::Color::Red)
                {
                    if (ShapeVector[r + 2][c + 2].getFillColor() == sf::Color::Red)
                    {
                        if (ShapeVector[r + 3][c + 3].getFillColor() == sf::Color::Red)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 1][c + 1].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 2][c + 2].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 3][c + 3].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r + 1][c + 1].setOutlineThickness(5);
                            ShapeVector[r + 2][c + 2].setOutlineThickness(5);
                            ShapeVector[r + 3][c + 3].setOutlineThickness(5);

                            return true;
                        }
                    }
                }
            }
        }
    }

    for (int r = 0; r < 3; r++)
    {
        if (ShapeVector[r][3].getFillColor() == sf::Color::Red)
        {
            if (ShapeVector[r + 1][4].getFillColor() == sf::Color::Red)
            {
                if (ShapeVector[r + 2][5].getFillColor() == sf::Color::Red)
                {
                    if (ShapeVector[r + 3][6].getFillColor() == sf::Color::Red)
                    {
                        ShapeVector[r][3].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r + 1][4].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r + 2][5].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r + 3][6].setOutlineColor(sf::Color(255, 90, 0));

                        ShapeVector[r][3].setOutlineThickness(5);
                        ShapeVector[r + 1][4].setOutlineThickness(5);
                        ShapeVector[r + 2][5].setOutlineThickness(5);
                        ShapeVector[r + 3][6].setOutlineThickness(5);

                        return true;
                    }
                }
            }
        }

        if (ShapeVector[r][3].getFillColor() == sf::Color::Red)
        {
            if (ShapeVector[r - 1][2].getFillColor() == sf::Color::Red)
            {
                if (ShapeVector[r - 2][1].getFillColor() == sf::Color::Red)
                {
                    if (ShapeVector[r - 3][0].getFillColor() == sf::Color::Red)
                    {
                        ShapeVector[r][3].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r - 1][2].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r - 2][1].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r - 3][0].setOutlineColor(sf::Color(255, 90, 0));

                        ShapeVector[r][3].setOutlineThickness(5);
                        ShapeVector[r - 1][2].setOutlineThickness(5);
                        ShapeVector[r - 2][1].setOutlineThickness(5);
                        ShapeVector[r - 3][0].setOutlineThickness(5);

                        return true;
                    }
                }
            }
        }
    }

    for (int c = 4; c < 7; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Red)
            {
                if (ShapeVector[r + 1][c - 1].getFillColor() == sf::Color::Red)
                {
                    if (ShapeVector[r + 2][c - 2].getFillColor() == sf::Color::Red)
                    {
                        if (ShapeVector[r + 3][c - 3].getFillColor() == sf::Color::Red)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 1][c - 1].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 2][c - 2].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 3][c - 3].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r + 1][c - 1].setOutlineThickness(5);
                            ShapeVector[r + 2][c - 2].setOutlineThickness(5);
                            ShapeVector[r + 3][c - 3].setOutlineThickness(5);

                            return true;
                        }
                    }
                }
            }
        }
    }

    return false;
}

bool checkWinYellow(std::vector <std::vector<sf::CircleShape>> &ShapeVector)
{
   for (int c = 0; c < 7; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Yellow)
            {
                if (ShapeVector[r + 1][c].getFillColor() == sf::Color::Yellow)
                {
                    if (ShapeVector[r + 2][c].getFillColor() == sf::Color::Yellow)
                    {
                        if (ShapeVector[r + 3][c].getFillColor() == sf::Color::Yellow)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 1][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 2][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 3][c].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r + 1][c].setOutlineThickness(5);
                            ShapeVector[r + 2][c].setOutlineThickness(5);
                            ShapeVector[r + 3][c].setOutlineThickness(5);
                            
                            return true;
                        }
                    }
                }
            }
        }
    }

    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Yellow)
            {
                if (ShapeVector[r][c + 1].getFillColor() == sf::Color::Yellow)
                {
                    if (ShapeVector[r][c + 2].getFillColor() == sf::Color::Yellow)
                    {
                        if (ShapeVector[r][c + 3].getFillColor() == sf::Color::Yellow)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r][c + 1].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r][c + 2].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r][c + 3].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r][c + 1].setOutlineThickness(5);
                            ShapeVector[r][c + 2].setOutlineThickness(5);
                            ShapeVector[r][c + 3].setOutlineThickness(5);

                            return true;
                        }
                    }
                }
            }
        }
    }

    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Yellow)
            {
                if (ShapeVector[r + 1][c + 1].getFillColor() == sf::Color::Yellow)
                {
                    if (ShapeVector[r + 2][c + 2].getFillColor() == sf::Color::Yellow)
                    {
                        if (ShapeVector[r + 3][c + 3].getFillColor() == sf::Color::Yellow)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 1][c + 1].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 2][c + 2].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 3][c + 3].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r + 1][c + 1].setOutlineThickness(5);
                            ShapeVector[r + 2][c + 2].setOutlineThickness(5);
                            ShapeVector[r + 3][c + 3].setOutlineThickness(5);

                            return true;
                        }
                    }
                }
            }
        }
    }

    for (int r = 0; r < 3; r++)
    {
        if (ShapeVector[r][3].getFillColor() == sf::Color::Yellow)
        {
            if (ShapeVector[r + 1][4].getFillColor() == sf::Color::Yellow)
            {
                if (ShapeVector[r + 2][5].getFillColor() == sf::Color::Yellow)
                {
                    if (ShapeVector[r + 3][6].getFillColor() == sf::Color::Yellow)
                    {
                        ShapeVector[r][3].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r + 1][4].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r + 2][5].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r + 3][6].setOutlineColor(sf::Color(255, 90, 0));

                        ShapeVector[r][3].setOutlineThickness(5);
                        ShapeVector[r + 1][4].setOutlineThickness(5);
                        ShapeVector[r + 2][5].setOutlineThickness(5);
                        ShapeVector[r + 3][6].setOutlineThickness(5);

                        return true;
                    }
                }
            }
        }

        if (ShapeVector[r][3].getFillColor() == sf::Color::Yellow)
        {
            if (ShapeVector[r - 1][2].getFillColor() == sf::Color::Yellow)
            {
                if (ShapeVector[r - 2][1].getFillColor() == sf::Color::Yellow)
                {
                    if (ShapeVector[r - 3][0].getFillColor() == sf::Color::Yellow)
                    {
                        ShapeVector[r][3].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r - 1][2].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r - 2][1].setOutlineColor(sf::Color(255, 90, 0));
                        ShapeVector[r - 3][0].setOutlineColor(sf::Color(255, 90, 0));

                        ShapeVector[r][3].setOutlineThickness(5);
                        ShapeVector[r - 1][2].setOutlineThickness(5);
                        ShapeVector[r - 2][1].setOutlineThickness(5);
                        ShapeVector[r - 3][0].setOutlineThickness(5);

                        return true;
                    }
                }
            }
        }
    }

    for (int c = 4; c < 7; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (ShapeVector[r][c].getFillColor() == sf::Color::Yellow)
            {
                if (ShapeVector[r + 1][c - 1].getFillColor() == sf::Color::Yellow)
                {
                    if (ShapeVector[r + 2][c - 2].getFillColor() == sf::Color::Yellow)
                    {
                        if (ShapeVector[r + 3][c - 3].getFillColor() == sf::Color::Yellow)
                        {
                            ShapeVector[r][c].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 1][c - 1].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 2][c - 2].setOutlineColor(sf::Color(255, 90, 0));
                            ShapeVector[r + 3][c - 3].setOutlineColor(sf::Color(255, 90, 0));

                            ShapeVector[r][c].setOutlineThickness(5);
                            ShapeVector[r + 1][c - 1].setOutlineThickness(5);
                            ShapeVector[r + 2][c - 2].setOutlineThickness(5);
                            ShapeVector[r + 3][c - 3].setOutlineThickness(5);

                            return true;
                        }
                    }
                }
            }
        }
    }

    return false;
}

