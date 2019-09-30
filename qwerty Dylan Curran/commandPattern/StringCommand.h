#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
class StringCommand
{
private:
	std::string m_wordPrompt;
	std::string m_word;
	sf::Time timer = sf::Time::Zero;
	float m_countChar = 0;
public:
	void SetupString();
	void StringPrompt();
	void keyInput(sf::Time t_deltatime, std::string &t_string);
};
