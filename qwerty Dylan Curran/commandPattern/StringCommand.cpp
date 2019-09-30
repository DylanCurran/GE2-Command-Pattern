#include "StringCommand.h"

// @author Dylan Curran

void StringCommand::SetupString()
{
	m_wordPrompt = "Enter Your letters using qwerty: ";

}

void StringCommand::StringPrompt()
{
	std::cout << m_wordPrompt << std::endl;
	std::cin >> m_word;
}

void StringCommand::keyInput(sf::Time t_deltatime, std::string &string)
{
	/// <summary>
	/// give this tab and bksp a fix, charAt is this problem
	/// </summary>
	/// <param name="t_deltatime"></param>
	/// <param name="string"></param>
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
	{
		if (timer < t_deltatime)
		{
			if (m_countChar < string.length())
			{
				m_countChar++;
			}
			std::cout << "current Letter: " +string.at(0) << std::endl;
		}
		timer += t_deltatime;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
	{
		if (timer < t_deltatime)
		{
			if (m_countChar > 0)
			{
				m_countChar--;
			}
			std::cout << "current Letter: " +string.at(m_countChar);// << std::endl;
		}
		timer += t_deltatime;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{

		if (timer < t_deltatime)
		{
			string += "q";
			//m_countChar++;
			std::cout << string << std::endl;
		}
		timer += t_deltatime;
		
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		if (timer < t_deltatime)
		{
			//m_countChar++;
			string += "w";
			std::cout << string << std::endl;
		}
		timer += t_deltatime;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		if (timer < t_deltatime)
		{
			//m_countChar++;
			string += "e";
			std::cout << string << std::endl;
		}
		timer += t_deltatime;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		if (timer < t_deltatime)
		{
			//m_countChar++;
			string += "r";
			std::cout << string << std::endl;
		}
		timer += t_deltatime;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		if (timer < t_deltatime)
		{
			//m_countChar++;
			string += "t";
			std::cout << string << std::endl;
		}
		timer += t_deltatime;
;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		if (timer < t_deltatime)
		{
			//m_countChar++;
			string += "y";
			std::cout << string << std::endl;
		}
		timer += t_deltatime;
	}
	else
	{
		timer = sf::Time::Zero;
	}
}
