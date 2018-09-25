// LEESONATOR
// I'm sorry, this is really bad.
#include <iostream>
#include <string>
using namespace std;

// IDEAS:
// is there a way to clear the terminal output each time?
// have a second string, intelligentAnswers, that contains answers for key questions (still more if statements)
// can clear out intelligentAnswers each time:
// intelligentAnswers = ""; after subloop ends

int main() {
	
	std::cout << std::endl;
	std::cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to Leesonator! The magical uncopyrighted computer program that guesses what comic book character you're thinking of!";
	std::cout << std::endl;
	std::cout << "Make sure you study up on your character's information beforehand and answer truthfully, because I don't take kindly to liars...";
	std::cout << std::endl;
	std::cout << std::endl;
	
	
	string currentAnswers = "";
	string intelligentAnswers = "";
	string intelligentAnswers2 = "";
	string inMarvelTF = "";
	string answer;
	string intelligentAnswer;
	string killQuicksilver = ""; 
	string isBadGuy = "";
	
	
	// Could I have done this much more efficiently?
	// Yes, of course.
	// I could've had a while loop iterate through a data structure of my questions.
	// And had each question linked to the respective boolean.
	// And updated a current list of booleans with each question.
	// Yeah, that would've been a lot more efficient.
	
	// But I'm not the one who wanted a minimum of 2,000 lines of code.
	// Welcome to Hell. 
	
	retryGood:
	std::cout << "Is your character predominantly morally good?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			intelligentAnswers2 += "Y";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
			intelligentAnswers2 += "N";
		}
		else 
		{
			std::cout << "Sorry, that's bad input. Retry.";
			std::cout << std::endl;
			goto retryGood;
		}
	retryMale:
	std::cout << "Is your character considered male?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			intelligentAnswers2 += "Y";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
			intelligentAnswers2 += "N";
		}
		else 
		{
			std::cout << "Sorry, that's bad input. Retry.";
			std::cout << std::endl;
			goto retryMale;
		}
	
	// Before we continue...
	// THE GAUNTLET
	// This section eliminates the most popular characters based on the above combinations (good/bad, guys/girls)
	
	if ((currentAnswers == "00") || (currentAnswers == "01") || (currentAnswers == "10") || (currentAnswers == "11")) 
	{ 
	// BEGIN GAUNTLET
	// Good Guys
	if (currentAnswers == "11") 
	{
		retryMan:
		std::cout << "Does he have 'man' in his superhero name?";
		std::cout << std::endl;
		std::cout << "Enter 1 for Yes, 0 for No.";
		std::cout << std::endl;
			std::cin >> intelligentAnswer;
			if (intelligentAnswer == "1") 
			{
				intelligentAnswers += "Y";
			}
			else if (intelligentAnswer == "0")
			{
				intelligentAnswers += "N";
			}
			else 
			{
				goto retryMan;
			}
			
			// Good Guys > -man
			if (intelligentAnswers == "Y") 
			{
				retryBat:
				std::cout << "Does he dress up like a bat or bug?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
					std::cin >> intelligentAnswer;
					if (intelligentAnswer == "1") 
					{
						intelligentAnswers += "Y";
					}
					else if (intelligentAnswer == "0")
					{
						intelligentAnswers += "N";
					}
					else
					{
						goto retryBat;
					}
					// Good Guys > -man > bat/bug
					if (intelligentAnswers == "YY") 
					{
						retryCave:
						std::cout << "Does he live in a cave beneath his mansion?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> intelligentAnswer;
							if (intelligentAnswer == "1") 
							{
								std::cout << "I think your character is... Batman, the Dark Knight!";
								std::cout << std::endl;
							}
							else if (intelligentAnswer == "0")
							{
								retryReboots:
								std::cout << "Does he have several movie reboots where spider webs are a metaphor for male adolescence?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> intelligentAnswer;
									if (intelligentAnswer == "1") 
									{
										std::cout << "I think your character is... your friendly neighborhood Spider-Man!";
										std::cout << std::endl;
									}
									else if (intelligentAnswer == "0") 
									{
										goto endGauntlet;
									}
									else 
									{
										goto retryReboots;
									}
							}
							else 
							{
								goto retryCave;
							}
					}
					// Good Guys > -man > not bat/bug
					else if (intelligentAnswers == "YN") 
					{
						retrySuit:
						std::cout << "Does he wear a metal suit he originally invented for escaping terrorists?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> intelligentAnswer;
							if (intelligentAnswer == "1") 
							{
								std::cout << "I think your character is... Iron Man!";
								std::cout << std::endl;
							}
							else if (intelligentAnswer == "0")
							{
								retryRock:
								std::cout << "Is his only weakness a particular glowing green rock?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> intelligentAnswer;
									if (intelligentAnswer == "1") 
									{
										std::cout << "I think your character is... Superman, the Man of Steel!";
										std::cout << std::endl;
									}
									else if (intelligentAnswer == "0") 
									{
										goto endGauntlet;
									}
									else
									{
										goto retryRock;
									}
							}
							else 
							{
								goto retrySuit;
							}
					}
			}	
			// Good Guys > not -man	
			else if (intelligentAnswers == "N") 
			{
				retryClass:
				std::cout << "Does he wear a costume that would look ridiculous if you wore it to class?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
					std::cin >> intelligentAnswer;
					if (intelligentAnswer == "1") 
					{
						intelligentAnswers += "Y";
					}
					else if (intelligentAnswer == "0")
					{
						intelligentAnswers += "N";
					}
					else
					{
						goto retryClass;
					}
					// Good Guys > not -man > costume
					if (intelligentAnswers == "NY") 
					{
						retryAmerican:
						std::cout << "Does he fight with a shield for truth, justice, and the American way?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> intelligentAnswer;
							if (intelligentAnswer == "1") 
							{
								std::cout << "I think your character is... Captain America!";
								std::cout << std::endl;
							}
							else if (intelligentAnswer == "0")
							{
								retryHammer:
								std::cout << "Does he wield a mythical hammer only the worthy may lift?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> intelligentAnswer;
									if (intelligentAnswer == "1") 
									{
										std::cout << "I think your character is... Thor, God of Thunder!";
										std::cout << std::endl;
									}
									else if (intelligentAnswer == "0") 
									{
										goto endGauntlet;
									}
									else 
									{
										goto retryHammer;
									}
							}
							else
							{
								goto retryAmerican;
							}
					}
					// Good Guys > not -man > no costume
					else if (intelligentAnswers == "NN") 
					{
						retryMean:
						std::cout << "Is he a mean green killing machine with a short temper?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> intelligentAnswer;
							if (intelligentAnswer == "1") 
							{
								std::cout << "I think your character is... The Incredible Hulk!";
								std::cout << std::endl;
							}
							else if (intelligentAnswer == "0")
							{
								retryClaws:
								std::cout << "Does he have long metal claws sheathed in Adamantium?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> intelligentAnswer;
									if (intelligentAnswer == "1") 
									{
										std::cout << "I think your character is... Wolverine!";
										std::cout << std::endl;
									}
									else if (intelligentAnswer == "0") 
									{
										goto endGauntlet;
									}
									else
									{
										goto retryClaws;
									}
							}
							else
							{
								goto retryMean;
							}
					}
			}
	} // end Good Guys
	// clear intelligentAnswers
	intelligentAnswers = "";
	// Bad Guys
	if (currentAnswers == "01") 
	{
		retryGodlike:
		std::cout << "Does he have godlike powers?";
		std::cout << std::endl;
		std::cout << "Enter 1 for Yes, 0 for No.";
		std::cout << std::endl;
			std::cin >> intelligentAnswer;
			if (intelligentAnswer == "1") 
			{
				intelligentAnswers += "Y";
			}
			else if (intelligentAnswer == "0")
			{
				intelligentAnswers += "N";
			}
			else
			{
				goto retryGodlike;
			}
			// Bad Guys > godlike
			if (intelligentAnswers == "Y") 
			{
				retryAdopted:
				std::cout << "Is he the adopted brother of an important electrifying superhero?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
				std::cin >> intelligentAnswer;
				if (intelligentAnswer == "1") 
				{
					std::cout << "I think your character is... Loki, the God of Tricks!";
					std::cout << std::endl;
				}
				else if (intelligentAnswer == "0")
				{
					retryGems:
					std::cout << "Does he take gem collecting a little too seriously?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
						std::cin >> intelligentAnswer;
						if (intelligentAnswer == "1") 
						{
							std::cout << "I think your character is... Thanos, the Mad Titan!";
							std::cout << std::endl;
						}
						else if (intelligentAnswer == "0") 
						{
							goto endGauntlet;
						}
						else
						{
							goto retryGems;
						}
				}
				else
				{
					goto retryAdopted;
				}
			}
			// Bad Guys > not godlike
			else if (intelligentAnswers == "N") 
			{
				retrySerious:
				std::cout << "Does he often wonder why people are so serious?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
				std::cin >> intelligentAnswer;
				if (intelligentAnswer == "1") 
				{
					std::cout << "I think your character is... the Joker!";
					std::cout << std::endl;
				}
				else if (intelligentAnswer == "0")
				{
					retryMetro:
					std::cout << "Is he a genius billionaire trying to control Metropolis City?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
						std::cin >> intelligentAnswer;
						if (intelligentAnswer == "1") 
						{
							std::cout << "I think your character is... Lex Luthor!";
							std::cout << std::endl;
						}
						else if (intelligentAnswer == "0") 
						{
							goto endGauntlet;
						}
						else
						{
							goto retryMetro;
						}
				}
				else
				{
					goto retrySerious;
				}
			}
	} // end Bad Guys
	// clear intelligentAnswers
	intelligentAnswers = "";
	// Good Girls
	if (currentAnswers == "10")
	{
		retryAmazon:
		std::cout << "Does she come from a line of strong Amazonian women?";
		std::cout << std::endl;
		std::cout << "Enter 1 for Yes, 0 for No.";
		std::cout << std::endl;
			std::cin >> intelligentAnswer;
			if (intelligentAnswer == "1") 
			{
				std::cout << "I think your character is... Wonder Woman!";
				std::cout << std::endl;
			}
			else if (intelligentAnswer == "0")
			{
				retryThighs:
				std::cout << "Is she a former Russian spy that chokes men with her thighs?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
					std::cin >> intelligentAnswer;
					if (intelligentAnswer == "1") 
					{
						std::cout << "I think your character is... Black Widow!";
						std::cout << std::endl;
					}
					else if (intelligentAnswer == "0") 
					{
						goto endGauntlet;
					}
					else
					{
						goto retryThighs;
					}
			}
			else
			{
				goto retryAmazon;
			}
	} // end Good Girls
	// clear intelligentAnswers
	intelligentAnswers = "";
	// Bad Girls >;)
	if (currentAnswers == "00")
	{
		retryThicc:
		std::cout << "Is she a thicc clown?";
		std::cout << std::endl;
		std::cout << "Enter 1 for Yes, 0 for No.";
		std::cout << std::endl;
			std::cin >> intelligentAnswer;
			if (intelligentAnswer == "1") 
			{
				std::cout << "I think your character is... Harley Quinn!";
				std::cout << std::endl;
			}
			else if (intelligentAnswer == "0") 
			{
				goto endGauntlet;
			}
			else 
			{
				goto retryThicc;
			}
	} // end Bad Girls
	// clear intelligentAnswers
	intelligentAnswers = "";
	
	// in here ask if was right or not, then decide if should keep asking
	retryUnpopular:
	std::cout << "Was my guess correct?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
	std::cin >> answer;
	if (answer == "1") 
	{
		std::cout << "Yay! Thanks for playing!";
		std::cout << std::endl;
		std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
		std::cout << std::endl;
		return 0;
	}
	else if (answer == "0") 
	{
		std::cout << "Well, at least you didn't pick an extremely popular character...";
		std::cout << std::endl;
		goto endGauntlet;
	}
	else
	{
		goto retryUnpopular;
	}
	} // END THE GAUNTLET (PART 1...)
	
					
	endGauntlet:
	
		
	retryFly:
	std::cout << "Is your character generally able to fly?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryFly;
		}
	retryCape:	
	std::cout << "Does your character wear a cape?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryCape;
		}
	retryMarvel:
	std::cout << "Is your character in the Marvel comics universe? Marvel includes the X-Men!";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			inMarvelTF = "TRUE";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
			inMarvelTF = "FALSE";
		}
		else
		{
			goto retryMarvel;
		}
	retrySuperpowers:	
	std::cout << "Does your character have superpowers natural to their body?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			std::cout << "Sorry, that's bad input. Retry.";
			std::cout << std::endl;
			goto retrySuperpowers;
		}
		
	retryBadGuyRight:
	if ((intelligentAnswers2 == "NY") || (intelligentAnswers2 == "NN"))
	{
		std::cout << "But you're thinking of a bad guy, right?";
		std::cout << std::endl;
		std::cout << "Enter 1 for Yes, 0 for No.";
		std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1")
		{
			isBadGuy = "TRUE";
			goto villainGauntlet;
		}
		else if (answer == "0")
		{
			std::cout << "Ah, my bad. I just have trust issues.";
			std::cout << std::endl;
		}
		else 
		{
			goto retryBadGuyRight;
		}
	}
	endBadGuyRight:
		
	// If they're not in Marvel, skip the next three questions
	if (inMarvelTF == "FALSE")
	{
		currentAnswers += "0";
		currentAnswers += "0";
		currentAnswers += "0";
		goto MarvelSkipper;
	}
		
	retryXMen:	
	std::cout << "Is your character a member of the X-Men group?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			killQuicksilver += "Y";
			// Dispatch the X-Men Bounty Hunter! He seeks and destroys the 8 most popular X-Men!
			if (intelligentAnswers2 == "YY") // X-Men > Good Guy
			{
			retryProfessor:
			std::cout << "Is your character a professor and headmaster of a school for gifted youngsters?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
				std::cin >> answer;
				if (answer == "1")  
				{
					std::cout << "I think your character is... Professor Charles Xavier!";
					std::cout << std::endl;
				}
				else if (answer == "0") 
				{
					retryBeast:
					std::cout << "Does your character transform into an angry blue... beast?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1")  
						{
							std::cout << "I think your character is... Beast!";
							std::cout << std::endl;
						}
						else if (answer == "0")
						{
							goto endXmenBountyHunter;
						}
						else 
						{
							goto retryBeast;
						}
				}	
				else
				{
					goto retryProfessor;
				}	
			} // end X-Men > Good Guy	
			else if (intelligentAnswers2 == "NY") // X-Men > Bad Guy
			{
			retryMetalmind:
			std::cout << "Can he control metal with his mind?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
				std::cin >> answer;
				if (answer == "1")  
				{
					std::cout << "I think your character is... Magneto!";
					std::cout << std::endl;
				}
				else if (answer == "0") 
				{
					goto endXmenBountyHunter;
				}
				else 
				{
					goto retryMetalmind;
				}
			} // end X-Men > Bad Guy	
			else if ((intelligentAnswers2 == "YN") || (intelligentAnswers2 == "NN")) // X-Men > Good Girls + Bad Girls >;)
			{
				if (currentAnswers == "1011111") // Probably Storm
				{
					retryStormy:
					std::cout << "Does she control the weather, especially stormy weather?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1")  
						{
							std::cout << "I think your character is... Storm!";
							std::cout << std::endl;
						}
						else if (answer == "0") 
						{
							goto endXmenBountyHunter;
						}
						else
						{
							goto retryStormy;
						}
				}
				else // Where my morally ambiguous bitches at
				{
					retryBeanTray:
					std::cout << "Does she have almost limitless cosmic power and a name that rhymes with Bean Tray?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1")  
						{
							std::cout << "I think your character is... Jean Grey, the Phoenix!";
							std::cout << std::endl;
						}
						else if (answer == "0") 
						{
							retryBlueShapeshift:
							std::cout << "Is she a blue-skinned shapeshifting seductress?";
							std::cout << std::endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
								std::cin >> answer;
								if (answer == "1")  
								{
									std::cout << "I think your character is... Mystique!";
									std::cout << std::endl;
								}
								else if (answer == "0")
								{
									goto endXmenBountyHunter;
								}
								else
								{
									goto retryBlueShapeshift;
								}
						}
						else
						{
							goto retryBeanTray;
						}
				}	
					
			} // end X-Men > Good Girls + Bad Girls >;)
			// in here ask if was right or not, then decide if should keep asking
			retryPopularXMen:
			std::cout << "Was my guess correct?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
			std::cin >> answer;
			if (answer == "1") 
			{
				std::cout << "Yay! Thanks for playing!";
				std::cout << std::endl;
				std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
				std::cout << std::endl;
				return 0;
			}
			else if (answer == "0") 
			{
				std::cout << "Well, at least you didn't pick an extremely popular X-Man...";
				std::cout << std::endl;
				goto endXmenBountyHunter;
			}
			else
			{
				goto retryPopularXMen;
			}
		} // The wrath of the X-Men Bounty Hunter ends here... but reinforcements have been sent!
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryXMen;
		}
		
	endXmenBountyHunter:
		
	retryAvengerMember:	
	std::cout << "Is your character a member of the Avengers team from the movies? Include agents.";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			killQuicksilver += "Y";
			// Ah, so your character is one of the Avengers? This narrows things down quite considerably...
			// Dispatch the Avengers Killer!
			std::cout << "One of the Avengers, you say?";
			std::cout << std::endl;
			if (intelligentAnswers2 == "YY") 
			{ // Avengers > Good Guys
				retryToolFighter:
				std::cout << "When he fights, does he use any tools? Possibly a shield, or hammer, or full-body suit, although guns and bows also count...";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1") 
					{ // Avengers > Good Guys > fights with tools
						// Cap, IM, Thor, Hawkeye, Fury, Falcon
						retryBigBudget:
						std::cout << "Did he get his own big-budget movie before the Avengers movie came out?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1") 
							{ // Avengers > Good Guys > fights with tools > big-budget movie
								// Cap, IM, Thor
								retryCivilWar:
								std::cout << "Did he take a side in the fighting of Civil War (the movie version)?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> answer;
									if (answer == "1") 
									{ // Avengers > Good Guys > fights with tools > big-budget movie > fought in CW
										// Cap, IM
										retryGBPP:
										std::cout << "Without his suit, is he just a genius billionaire playboy philanthropist?";
										std::cout << std::endl;
										std::cout << "Enter 1 for Yes, 0 for No.";
										std::cout << std::endl;
											std::cin >> answer;
											if (answer == "1") 
											{
												std::cout << "I think your character is... Iron Man!";
												std::cout << std::endl;
											}
											else if (answer == "0") 
											{ // Avengers > Good Guys > fights with tools > big-budget movie > fought in CW > not billionaire
												retryScrawny:
												std::cout << "Before assuming his hero alias, was he just a scrawny kid from Brooklyn who wanted to join the army?";
												std::cout << std::endl;
												std::cout << "Enter 1 for Yes, 0 for No.";
												std::cout << std::endl;
													std::cin >> answer;
													if (answer == "1") 
													{
														std::cout << "I think your character is... Captain America, the First Avenger!";
														std::cout << std::endl;
													}
													else if (answer == "0")
													{
														goto endAvengersKiller;
													}
													else 
													{
														goto retryScrawny;
													}
											}
											else
											{
												goto retryGBPP;
											}
									} // end Avengers > Good Guys > fights with tools > big-budget movie > fought in CW
									else if (answer == "0") // Thor 
									{ // Avengers > Good Guys > fights with tools > big-budget movie > didn't fight in CW
										retryBrotherlyTricks:
										std::cout << "Does he have an adopted brother who often plays tricks on him, such as trying to take over the world?";
										std::cout << std::endl;
										std::cout << "Enter 1 for Yes, 0 for No.";
										std::cout << std::endl;
											std::cin >> answer;
											if (answer == "1") 
											{	
												std::cout << "I think your character is... Thor, Son of Asgard";
												std::cout << std::endl;
											}
											else if (answer == "0") 
											{
												goto endAvengersKiller;
											}
											else
											{
												goto retryBrotherlyTricks;
											}
									} // end Avengers > Good Guys > fights with tools > big-budget movie > didn't fight in CW
									else
									{
										goto retryCivilWar;
									}
							} // end Avengers > Good Guys > fights with tools > big-budget movie 
							else if (answer == "0") // No big-budget movie (so Hawkeye, Fury, Falcon)
							{ // Avengers > Good Guys > fights with tools > no big-budget movie
								retrySHIELDAgent:
								std::cout << "Is he an official agent for S.H.I.E.L.D.?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> answer;
									if (answer == "1") 
									{ // Avengers > Good Guys > fights with tools > no big-budget movie > agent
										// Fury or Hawkeye
										retryEyepatch:
										std::cout << "Does he wear an eyepatch?";
										std::cout << std::endl;
										std::cout << "Enter 1 for Yes, 0 for No.";
										std::cout << std::endl;
											std::cin >> answer;
											if (answer == "1") 
											{
												std::cout << "I think your character is... Agent Nick Fury!";
												std::cout << std::endl;
											}
											else if (answer == "0") 
											{// Avengers > Good Guys > fights with tools > no big-budget movie > agent > no eyepatch
												retryHawkeye:
												std::cout << "Well if he doesn't wear an eyepatch, he must have great vision... maybe even the eye of a hawk, right?";
												std::cout << std::endl;
												std::cout << "Enter 1 for Yes, 0 for No.";
												std::cout << std::endl;
													std::cin >> answer;
													if (answer == "1") 
													{
														std::cout << "I think your character is... Agent Barton, also known as Hawkeye!";
														std::cout << std::endl;
													}
													else if (answer == "0")
													{
														goto endAvengersKiller;
													}
													else
													{
														goto retryHawkeye;
													}
											} // end Avengers > Good Guys > fights with tools > no big-budget movie > agent > no eyepatch
											else 
											{
												goto retryEyepatch;
											}
									} // end Avengers > Good Guys > fights with tools > no big-budget movie > agent
									else if (answer == "0") // not an agent
									{ // Avengers > Good Guys > fights with tools > no big-budget movie > not an agent
										retryBirdofPrey:
										std::cout << "Does he fly with a specialized winged suit that makes him look like a bird of prey?";
										std::cout << std::endl;
										std::cout << "Enter 1 for Yes, 0 for No.";
										std::cout << std::endl;
											std::cin >> answer;
											if (answer == "1") 
											{			
												std::cout << "I think your character is... Falcon!";
												std::cout << std::endl;
											}
											else if (answer == "0") 
											{
												goto endAvengersKiller;
											}
											else
											{
												goto retryBirdofPrey;
											}
									} // end Avengers > Good Guys > fights with tools > no big-budget movie > not an agent
									else
									{
										goto retrySHIELDAgent;
									}
							} // end Avengers > Good Guys > fights with tools > no big-budget movie
							else 
							{
								goto retryBigBudget;
							}
					} // end Avengers > Good Guys > fights with tools
					else if (answer == "0") // doesn't fight with tools (so Vision or Quicksilver) 
					{ // Avengers > Good Guys > doesn't fight with tools
						retryLaserForehead:
						std::cout << "Is he a synthetic being that can shoot yellow lasers out of his forehead?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1") 
							{
								std::cout << "I think your character is... Vision!";
								std::cout << std::endl;
							}
							else if (answer == "0")
							{ // Avengers > Good Guys > doesn't fight with tools > no lasers
								retryTwinSister:
								std::cout << "Does he have a twin sister?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> answer;
									if (answer == "1") 
									{
										std::cout << "I think your character is... Quicksilver!";
										std::cout << std::endl;
									}
									else if (answer == "0")
									{
										goto endAvengersKiller;
									}
									else
									{
										goto retryTwinSister;
									}
							} // end Avengers > Good Guys > doesn't fight with tools > no lasers
							else 
							{
								goto retryLaserForehead;
							}
					} // end Avengers > Good Guys > doesn't fight with tools
					else 
					{
						goto retryToolFighter;
					}
			} // end Avengers > Good Guys	
			else if (intelligentAnswers2 == "YN")
			{ // Avengers > Good Girls
				retryTwinBrother:
				std::cout << "Does she have a twin brother?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1") 
					{
						std::cout << "I think your character is... Scarlet Witch!";
						std::cout << std::endl;
					}
					else if (answer == "0") 
					{
						retryAgentforSHIELD:
						std::cout << "Does she work as an agent for S.H.I.E.L.D.?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1") 
							{
								std::cout << "I think your character is... Black Widow!";
								std::cout << std::endl;
							}
							else if (answer == "0") 
							{
								goto endAvengersKiller;
							}
							else
							{
								goto retryAgentforSHIELD;
							}
					}
					else
					{
						goto retryTwinBrother;
					}		
			} // end Avengers > Good Girls							
			retryUnpopularAvengers:
			std::cout << "Was my guess correct?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
			std::cin >> answer;
			if (answer == "1") 
			{
				std::cout << "Yay! Thanks for playing!";
				std::cout << std::endl;
				std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
				std::cout << std::endl;
				return 0;
			}
			else if (answer == "0") 
			{
				std::cout << "Well, at least you didn't pick an extremely popular Avenger...";
				std::cout << std::endl;
				goto endAvengersKiller;
			}
			else 
			{
				goto retryUnpopularAvengers;
			}							
		} // end if (answer == 1)  
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryAvengerMember;
		}
		
	if (killQuicksilver == "YY") // We think we've found Quicksilver! Act quickly or he'll run away!
	{
		retryKillQuicksilver:
		std::cout << "Hmm... a member of both the X-Men AND in the Avengers movies?";
		std::cout << std::endl;
		std::cout << "Are you thinking of... Quicksilver?";
		std::cout << std::endl;
		std::cout << "Enter 1 for Yes, 0 for No.";
		std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			std::cout << "Yay! Thanks for playing!";
			std::cout << std::endl;
			std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
			std::cout << std::endl;
			return 0;
		}
		else if (answer == "0") 
		{
			std::cout << "Darn, I was so sure! Hmm...";
			std::cout << std::endl;
			goto endAvengersKiller;
		}
		else
		{
			std::cout << "Sorry, that's bad input. Retry.";
			std::cout << std::endl;
			goto retryKillQuicksilver;
		}
	}	
	
	endAvengersKiller:		
	
	retryGotGMember:
	std::cout << "Is your character a member of the Guardians of the Galaxy?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			// There aren't too many Guardians of the Galaxy! We should be able to find them with the GUARDIAN KILLER!
			retryRelativelyHumanoid:
			std::cout << "Does your character look relatively humanoid? Maybe just a different color skin, or some strange head-antennae?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
				std::cin >> answer;
				if (answer == "1") 
				{ // Guardians > humanoid
					retryFullHair:
					std::cout << "Does your character have a nice full head of hair?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1") 
						{ // Guardians > humanoid > hair
							if (intelligentAnswers2 == "YY")
							{ // Guardians > humanoid > hair > Good Guy
								std::cout << "I think your character is... Star Lord, Peter Quill!";
								std::cout << std::endl;
							}
							else if ((intelligentAnswers2 == "YN") || (intelligentAnswers2 == "NN")) // is female
							{ // Guardians > humanoid > hair > Good Girls + Bad Girls >;)
								retryTwoAntennae:
								std::cout << "Does she have two antennae sticking out from her forehead?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> answer;
									if (answer == "1") 
									{
										std::cout << "I think your character is... Mantis!";
										std::cout << std::endl;
									}
									else if (answer == "0")
									{ // Guardians > humanoid > hair > Good Girls + Bad Girls >;) > no antennae
										retryGreenSkinGamora:
										std::cout << "Does she have green skin?";
										std::cout << std::endl;
										std::cout << "Enter 1 for Yes, 0 for No.";
										std::cout << std::endl;
											std::cin >> answer;
											if (answer == "1") 
											{
												std::cout << "I think your character is... Gamora!";
												std::cout << std::endl;
											}
											else if (answer == "0") 
											{
												retryBlueSkinNebula:
												std::cout << "What about blue skin?";
												std::cout << std::endl;
												std::cout << "Enter 1 for Yes, 0 for No.";
												std::cout << std::endl;
													std::cin >> answer;
													if (answer == "1") 
													{
														std::cout << "I think your character is... Nebula!";
														std::cout << std::endl;
													}
													else if (answer == "0") 
													{
														goto endGuardiansKiller;
													}
													else
													{
														goto retryBlueSkinNebula;
													}
											}
											else
											{
												goto retryGreenSkinGamora;
											}
									} // end Guardians > humanoid > hair > Good Girls + Bad Girls >;) > no antennae
									else 
									{
										goto retryTwoAntennae;
									}
							} // end Guardians > humanoid > hair > Good Girls + Bad Girls >;)	
						} // end Guardians > humanoid > hair		
						else if (answer == "0") // no hair
						{ // Guardians > humanoid > no hair
							retryWhistlingArrow:
							std::cout << "Does he kill with a special arrow controlled by whistling?";
							std::cout << std::endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
								std::cin >> answer;
								if (answer == "1") 
								{
									std::cout << "I think your character is... Yondu!";
									std::cout << std::endl;
								}
								else if (answer == "0")
								{ // Guardians > humanoid > no hair > no arrow
									retryRedTattoos:
									std::cout << "Does he have red tattoos?";
									std::cout << std::endl;
									std::cout << "Enter 1 for Yes, 0 for No.";
									std::cout << std::endl;
										std::cin >> answer;
										if (answer == "1") 
										{
											std::cout << "I think your character is... Drax the Destroyer!";
											std::cout << std::endl;
										}
										else if (answer == "0")
										{
											goto endGuardiansKiller;
										}
										else
										{
											goto retryRedTattoos;
										}
								}
								else
								{
									goto retryWhistlingArrow;
								}
						} // end Guardians > humanoid > no hair	
						else
						{
							goto retryFullHair;
						}		
				} // end Guardians > humanoid
				else if (answer == "0") // not humanoid
				{ // Guardians > not humanoid
					retryThreeWords:
					std::cout << "Does your character often repeat one three-word phrase over and over?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1") 
						{
							std::cout << "I think your character is... Groot!";
							std::cout << std::endl;
						}
						else if (answer == "0") 
						{
							retryRocketLauncher:
							std::cout << "Is your character a small fuzzy animal with a rocket launcher?";
							std::cout << std::endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
								std::cin >> answer;
								if (answer == "1") 
								{
									std::cout << "I think your character is... Rocket Raccoon!";
									std::cout << std::endl;
								}
								else if (answer == "0")
								{
									goto endGuardiansKiller;
								}
								else
								{
									goto retryRocketLauncher;
								}
						}
						else
						{
							goto retryThreeWords;
						}		
				} // end Guardians > not humanoid	
				else
				{
					goto retryRelativelyHumanoid;
				}
			retryUnpopularGuardians:
			std::cout << "Was my guess correct?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
			std::cin >> answer;
			if (answer == "1") 
			{
				std::cout << "Yay! Thanks for playing!";
				std::cout << std::endl;
				std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
				std::cout << std::endl;
				return 0;
			}
			else if (answer == "0") 
			{
				std::cout << "Are you certain they're in the Guardians of the Galaxy? I was so sure I had it...";
				std::cout << std::endl;
				goto endGuardiansKiller;
			}
			else
			{
				goto retryUnpopularGuardians;
			}								
		} // end if (answer == 1)
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryGotGMember;
		}
		
	endGuardiansKiller:
		
	MarvelSkipper:	
	// If they are in Marvel, skip this question
	if (inMarvelTF == "TRUE")
	{
		currentAnswers += "0";
		goto JLSkipper;
	}
	
	retryJLMember:	
	std::cout << "Is your character a member of the Justice League?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			// The Justice League has only 8 members... easily defeated by my assassin, the JLMERCERNARY!
			if (intelligentAnswers2 == "YN") // Good Girl
			{
				retryGoldenLasso:
				std::cout << "Does your character have a golden lasso?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1") 
					{
						std::cout << "I think your character is... Wonder Woman!";
						std::cout << std::endl;
					}
					else if (answer == "0")
					{
						goto endJLMercernary;
					}
					else
					{
						goto retryGoldenLasso;
					}
			}
			else // if (intelligentAnswers == "YY") // Good Guy
			{
				retryExtremelyGreen:
				std::cout << "Is he extremely green?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1") 
					{
						retryBrightestDay:
						std::cout << "Does he shine in brightest day, and even in blackest night?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1") 
							{
								std::cout << "I think your character is... Green Lantern!";
								std::cout << std::endl;
							} 
							else if (answer == "0")
							{
								retryMarsPeace:
								std::cout << "Does he come from Mars (hopefully in peace)?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> answer;
									if (answer == "1") 
									{
										std::cout << "I think your character is... Martian Manhunter!";
										std::cout << std::endl;
									}
									else if (answer == "0") 
									{
										goto endJLMercernary;
									}
									else
									{
										goto retryMarsPeace;
									}
							}
							else
							{
								goto retryBrightestDay;
							}
					}
					else if (answer == "0") // not green
					{ 
						retryRacecarEase:
						std::cout << "Could he outrun a racecar with ease?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1") 
							{
								retryBirdorPlane:
								std::cout << "Is he often mistaken for a bird, or a plane?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> answer;
									if (answer == "1") 
									{
										std::cout << "I think your character is... Superman, Man of Steel!";
										std::cout << std::endl;
									}
									else if (answer == "0")
									{
										retryBasicallyFast:
										std::cout << "Is running fast basically his only power?";
										std::cout << std::endl;
										std::cout << "Enter 1 for Yes, 0 for No.";
										std::cout << std::endl;
											std::cin >> answer;
											if (answer == "1") 
											{
												std::cout << "I think your character is... the Flash!";
												std::cout << std::endl;
											}
											else if (answer == "0")
											{
												goto endJLMercernary;
											}
											else
											{
												goto retryBasicallyFast;
											}
									}
									else
									{
										goto retryBirdorPlane;
									}
							} // end can outrun racecar
							else if (answer == "0") 
							{
								retryGothamDeserves:
								std::cout << "Is he the hero Gotham deserves, but not the one it needs right now?";
								std::cout << std::endl;
								std::cout << "Enter 1 for Yes, 0 for No.";
								std::cout << std::endl;
									std::cin >> answer;
									if (answer == "1") 
									{
										std::cout << "I think your character is... Batman, the Dark Knight!";
										std::cout << std::endl;
									}
									else if (answer == "0")
									{
										retryTalktoFish:
										std::cout << "Is his superpower being able to talk to fish?";
										std::cout << std::endl;
										std::cout << "Enter 1 for Yes, 0 for No.";
										std::cout << std::endl;
											std::cin >> answer;
											if (answer == "1") 
											{
												std::cout << "I think your character is... Aquaman!";
												std::cout << std::endl;
											}
											else if (answer == "0") 
											{
												retryManRobot:
												std::cout << "Is he half-man, half-robot?";
												std::cout << std::endl;
												std::cout << "Enter 1 for Yes, 0 for No.";
												std::cout << std::endl;
													std::cin >> answer;
													if (answer == "1") 
													{
														std::cout << "I think your character is... Cyborg!";
														std::cout << std::endl;
													}
													else if (answer == "0") 
													{
														goto endJLMercernary;
													}
													else 
													{
														goto retryManRobot;
													}
											} // end is not able to talk to fish
											else
											{
												goto retryTalktoFish;
											}
									} // end is not the hero Gotham deserves
									else
									{
										goto retryGothamDeserves;
									}
							} // end can't outrun racecar
							else
							{
								goto retryRacecarEase;
							}
					} // end not extremely green
					else
					{
						goto retryExtremelyGreen;
					}
			} // end Good Guy										
			retryUnpopularJL:
			std::cout << "Was my guess correct?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
			std::cin >> answer;
			if (answer == "1") 
			{
				std::cout << "Yay! Thanks for playing!";
				std::cout << std::endl;
				std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
				std::cout << std::endl;
				return 0;
			}
			else if (answer == "0") 
			{
				std::cout << "Are you certain they're in the Justice League? I was so sure I had it...";
				std::cout << std::endl;
				goto endJLMercernary;
			}
			else
			{
				goto retryUnpopularJL;
			}									
						
		} // end if (answer == 1)
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryJLMember;
		}
		
	endJLMercernary:
	
	JLSkipper:
	
	retryMaskorHelmet:	
	std::cout << "Does your character usually wear a mask/helmet that covers their face?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryMaskorHelmet;
		}	
	retryYoungerthan25:	
	std::cout << "Is your character usually shown as being younger than 25 years old?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryYoungerthan25;
		}
	retryWearsLotsRed:		
	std::cout << "Does your character wear a lot of red clothing? (If you have to think about it, it's probably no!)";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retryWearsLotsRed;
		}
	retryWearsLotsBlack:	
	std::cout << "Does your character wear a black uniform? (If you have to think about it, it's probably no!)";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retryWearsLotsBlack;
		}
	retryExtremelyRich:
	std::cout << "Is your character known for being extremely rich?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			// Richness detected. Initiating Proletariat uprising...
			if (intelligentAnswers2 == "YY") 
			{
				std::cout << "He's rich? And a good guy? Hmm...";
				std::cout << std::endl;
				retryBatThemedWeaponry:
				std::cout << "Does he use a lot of that money to buy expensive bat-themed weaponry?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No";
				std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1") 
					{
						std::cout << "I think your character is... Batman, the Caped Crusader!";
						std::cout << std::endl;
					}
					else if (answer == "0")
					{
						retryElectromagnetChest:
						std::cout << "Well, then does he have an electromagnet in his chest?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No";
						std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1") 
							{
								std::cout << "I think your character is... Iron Man!";
								std::cout << std::endl;
							}
							else if (answer == "0") 
							{
								goto endProletariatUprising;
							}
							else
							{
								goto retryElectromagnetChest;
							}
					}
					else
					{
						goto retryBatThemedWeaponry;
					}
			} // The filthy peasants have calmed down. It's safe for the fat cat aristocrats to come back out!
		retryUnpopularRichGuy:
		std::cout << "Was my guess correct?";
		std::cout << std::endl;
		std::cout << "Enter 1 for Yes, 0 for No.";
		std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			std::cout << "Yay! Thanks for playing!";
			std::cout << std::endl;
			std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
			std::cout << std::endl;
			return 0;
		}
		else if (answer == "0") 
		{
			std::cout << "Hmm... so your character isn't one of the popular rich guys, eh?";
			std::cout << std::endl;
			goto endProletariatUprising;
		}
		else
		{
			goto retryUnpopularRichGuy;
		}				
		} // end if (answer == 1) 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryExtremelyRich;
		}
		
	endProletariatUprising:
		
	retryMartialArts:	
	std::cout << "Does your character often fight with martial arts?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retryMartialArts;
		}
	retryGenius:		
	std::cout << "Is your character considered a genius?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryGenius;
		}	
	retrySuperStrength:	
	std::cout << "Does your character have natural super strength?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retrySuperStrength;
		}
	retryFromPlanetEarth:
	std::cout << "Is your character from planet Earth?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retryFromPlanetEarth;
		}
	retryIsAmerican:	
	std::cout << "Is your character American, or assumably from America?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryIsAmerican;
		}
	retryFightswithMagic:	
	std::cout << "Does your character often fight using magic?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryFightswithMagic;
		}
	retrySpecialTechnology:	
	std::cout << "Does your character often fight using special technology?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retrySpecialTechnology;
		}
	retrySecretIdentity:	
	std::cout << "Does your character protect their secret identity from being known?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retrySecretIdentity;
		}
	retryPlantBugAnimal:	
	std::cout << "Is your character based on a plant, bug, or animal?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryPlantBugAnimal;
		}
	retryOwnMovieShow:	
	std::cout << "Has your character had their own movie or show (main character/villain with name in title) in the last 15 years?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retryOwnMovieShow;
		}
	retryUnearthlySkinColor:	
	std::cout << "Does your character have an unearthly skin color?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryUnearthlySkinColor;
		}
	retryRegularHumanBeing:	
	std::cout << "Does your character look like a regular human being underneath their hero identity?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryRegularHumanBeing;
		}
	retryShapeshiftForm:	
	std::cout << "Can your character shapeshift or change their form?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryShapeshiftForm;
		}
	retryRoyalty:	
	std::cout << "Is your character considered royalty or a ruler where they're from?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
			retryWaterfall:
			std::cout << "Does your character get thrown off a waterfall?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
			std::cin >> answer;
			if (answer == "1")
			{
				std::cout << "I think your character is... Black Panther!";
				std::cout << std::endl;
				retryWaterfallCorrect:
				std::cout << "Was my guess correct?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
				std::cin >> answer;
				if (answer == "1") 
				{
					std::cout << "Yay! Thanks for playing!";
					std::cout << std::endl;
					std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
					std::cout << std::endl;
					return 0;
				}
				else if (answer == "0") 
				{
					std::cout << "Damn I was so sure...";
					std::cout << std::endl;
				}
				else
				{
					goto retryWaterfallCorrect;
				}
			}
			else if (answer == "0")
			{
			}
			else 
			{
				goto retryWaterfall;
			}
			
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryRoyalty;
		}
	retryWearsClothes:
	std::cout << "Does your character wear clothes?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryWearsClothes;
		}
	retryImmunetoBullets:	
	std::cout << "Is your character immune to bullets? (If they usually wear obviously bulletproof armor say yes)";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retryImmunetoBullets;
		}
	retrySidekick:	
	std::cout << "Is your character typically considered a sidekick or helper to someone else?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retrySidekick;
		}
	retryCurrentlyDead:	
	std::cout << "Is your character currently considered defeated or deceased in the movie universe?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else 
		{
			goto retryCurrentlyDead;
		}
	retryPredominantlyBlue:	
	std::cout << "Is your character predominantly blue in their skin or uniform?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}	
		else
		{
			goto retryPredominantlyBlue;
		}
	retryAncientMyths:	
	std::cout << "Is your character based clearly on ancient mythology?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}		
		else
		{
			goto retryAncientMyths;
		}
	retryGovOfficial:	
	std::cout << "Is your character an agent or government official?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryGovOfficial;
		}
	retryParent:	
	std::cout << "Is your character parent or guardian to a more important hero?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryParent;
		}
	retryGenerallyNeutral:	
	std::cout << "Is your character generally considered neutral or a bystander to the fighting?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
		std::cin >> answer;
		if (answer == "1") 
		{
			currentAnswers += "1";
		} 
		else if (answer == "0") 
		{
			currentAnswers += "0";
		}
		else
		{
			goto retryGenerallyNeutral;
		}
		
	// Villain Gauntlet
	// The user entered Morally Bad, and Male for the first two questions and it wasn't Joker / Lex / Loki?
	villainGauntlet:
	if (isBadGuy == "TRUE")
	{
		if (inMarvelTF == "TRUE")
		{
			std::cout << "Do they waste considerable time and effort fighting a teenage boy in spider pajamas?";
			std::cout << std::endl;
			std::cout << "Enter 1 for Yes, 0 for No.";
			std::cout << std::endl;
			std::cin >> answer;
			if (answer == "1")
			{ // in Spider-Man
				retryRaimi:
				std::cout << "Did your villain make an appearance in the films of Sam Raimi?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
				std::cin >> answer;
				if (answer == "1")
				{
					retryMetalAppendages:
					std::cout << "Does he fight using special weapons / appendages made of metal?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1")
					{ // Ock or Green Goblin
						retrySpecialMetalWeaponsSM:
						std::cout << "Does his name mislead one into expecting twice as many legs than he actually has?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1")
						{
							std::cout << "I think your character is... Doc Ock!";
							std::cout << std::endl;
						}
						else if (answer == "0")
						{
							retrySinisterCorp:
							std::cout << "Does he own a sinister corporation?";
							std::cout << std::endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1")
							{
								std::cout << "I think your character is... the Green Goblin!";
								std::cout << std::endl;
							}
							else if (answer == "0")
							{
								goto retryBadGuyRight;
							}
							else 
							{
								goto retrySinisterCorp;
							}
						}
						else 
						{
							goto retrySpecialMetalWeaponsSM;
						}
					}
					else if (answer == "0")
					{ // not Ock or Green Goblin > Sandman or Venom
						retrySandyBeach:
						std::cout << "Does he love playdays with his daughter at the sandy, sandy, sandy beach?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1")
						{
							std::cout << "I think your character is... Sandman!";
							std::cout << std::endl;
						}
						else if (answer == "0")
						{
							retryLiberalMedia:
							std::cout << "The liberal media is making all our characters black! Does he look like a black Spider-Man?";
							std::cout << std::endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1")
							{
								std::cout << "I think your character is... Venom!";
								std::cout << std::endl;
							}
							else if (answer == "0")
							{
								goto endBadGuyRight;
							}
							else 
							{
								goto retryLiberalMedia;
							}
						}
						else 
						{
							goto retrySandyBeach;
						}
					}
					else 
					{
						goto retryMetalAppendages;
					}
							
				}
				else if (answer == "0")
				{
					// not in Raimi > vulture, electro, carnage, lizard
					retryAlienWeapons:
					std::cout << "Does your character deal weapons powered by alien technology to provide for his family?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1")
					{
						std::cout << "I think your character is... Vulture!";
						std::cout << std::endl;
					}
					else if (answer == "0")
					{
						retryHamburger:
						std::cout << "Does his skin look like raw ground hamburger, blue raspberry soda, or neither?";
						std::cout << std::endl;
						std::cout << "Enter 2 for hamburger, 1 for soda, 0 for Neither.";
						std::cout << std::endl;
						std::cin >> answer;
						if (answer == "2")
						{
							std::cout << "I think your character is... Carnage!";
							std::cout << std::endl;
						}
						else if (answer == "1")
						{
							std::cout << "I think your character is... Electro!";
							std::cout << std::endl;
						}
						else if (answer == "0")
						{
							goto endBadGuyRight;
						}
						else 
						{
							goto retryHamburger;
						}
					}
					else 
					{
						goto retryAlienWeapons;
					}
				}
				else 
				{
					goto retryRaimi;
				}
			}
			else if (answer == "0")
			{ // Marvel > not Spider-Man villain
				std::cout << "Has your character been the villain in a relatively recent movie?";
				std::cout << std::endl;
				std::cout << "Enter 1 for Yes, 0 for No.";
				std::cout << std::endl;
				std::cin >> answer;
				if (answer == "1")
				{
					retryArguablyHuman:
					std::cout << "Is your character arguably a human lifeform, or close enough to be mistaken for one?";
					std::cout << std::endl;
					std::cout << "Enter 1 for Yes, 0 for No.";
					std::cout << std::endl;
					std::cin >> answer;
					if (answer == "1")
					{ // Red skull or Hela
						if (intelligentAnswers2 == "NN") // Bad girl
						{
							retryPetWolf:
							std::cout << "Does she have a pet wolf?";
							std::cout << std::endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1")
							{
								std::cout << "I think your character is... Hela, Goddess of Death!";
								std::cout << std::endl;
							}
							else if (answer == "0")
							{
								goto endBadGuyRight;
							}
							else 
							{
								goto retryPetWolf;
							}
						}
						else 
						{
							retryBadSunburn:
							std::cout << "Does he look like he has a really, really, really bad sunburn?";
							std::cout << std::endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1")
							{
								std::cout << "I think your character is... Red Skull!";
								std::cout << std::endl;
								std::cout << "*psst* ... come closer...";
								std::cout << std::endl;
								std::cout << "Hail Hydra";
								std::cout << std::endl;
							}
							else if (answer == "0")
							{
								goto endBadGuyRight;
							}
							else 
							{
								goto retryBadSunburn;
							}
						}
					}
					else if (answer == "0")
					{
						// Not red skull or Hela > Ultron or Dormammu
						retryAnotherDimension:
						std::cout << "Does your character come from another dimension?";
						std::cout << std::endl;
						std::cout << "Enter 1 for Yes, 0 for No.";
						std::cout << std::endl;
						std::cin >> answer;
						if (answer == "1")
						{
							std::cout << "I think your character is... Dormammu!";
							std::cout << std::endl;
						}
						else if (answer == "0")
						{
							retryGlobalPeace:
							std::cout << "What about from a global peacekeeping program gone haywire?";
							std::cout << std:: endl;
							std::cout << "Enter 1 for Yes, 0 for No.";
							std::cout << std::endl;
							std::cin >> answer;
							if (answer == "1")
							{
								std::cout << "I think your character is... Ultron!";
								std::cout << std::endl;
							}
							else if (answer == "0")
							{
								goto endBadGuyRight;
							}
							else 
							{
								goto retryGlobalPeace;
							}
						}
						else 
						{
							goto retryAnotherDimension;
						}			
					}
					else
					{
						goto retryArguablyHuman;
					}

					
				}
				else if (answer == "0") // not in a relatively recent movie
				{
					goto endBadGuyRight;
				}
			} 
			else if (answer == "0") // end marvel > not spider man villain
			{
				goto endBadGuyRight;
			}
		}
		else // isMarvelTF not true
		{
			goto endBadGuyRight;
		}
	retryUnpopularVillain:
	std::cout << "Was my guess correct?";
	std::cout << std::endl;
	std::cout << "Enter 1 for Yes, 0 for No.";
	std::cout << std::endl;
	std::cin >> answer;
	if (answer == "1") 
	{
		std::cout << "Yay! Thanks for playing!";
		std::cout << std::endl;
		std::cout << "*Processing this information to strengthen my binary tree... I am growing more powerful...*";
		std::cout << std::endl;
		return 0;
	}
	else if (answer == "0") 
	{
		std::cout << "Well, at least you didn't pick an extremely popular villain...";
		std::cout << std::endl;
		goto endBadGuyRight;
	}
	else
	{
		goto retryUnpopularVillain;
	}
	}
	else // isBadGuyRight not true 
	{ 
		goto endBadGuyRight;
	}
		
		
		
	/* MASTER LIST OF PARENT QUESTIONS
	1. Is your character predominantly morally good?
	2. Is your character considered male?
	3. Can your character generally able to fly?
	4. Does your character wear a cape?
	5. Is your character from the Marvel comics universe? Marvel includes the X-Men!
	6. Does your character have superpowers natural to their body?
	7. Is your character a member of the X-Men group?
	8. Is your character a member of the Avengers team from the movies? Include agents.
	9. Is your character a member of the Guardians of the Galaxy?
	10. Is your character a member of the Justice League?
	11. Does your character usually wear a mask/helmet that covers their face?
	12. Is your character usually shown as being younger than 25 years old?
	13. Does your character wear a lot of red clothing? (If you have to think about it, it's probably no!)
	14. Does your character wear a black uniform? (If you have to think about it, it's probably no!)
	15. Is your character known for being extremely rich?
	16. Does your character often fight with martial arts?
	17. Is your character considered a genius?
	18. Does your character have natural super strength?
	19. Is your character from planet Earth?
	20. Is your character American, or assumably from America?
	21. Does your character often fight using magic?
	22. Does your character often fight using special technology?
	23. Does your character protect their secret identity from being known?
	24. Is your character based on a plant, bug, or animal?
	25. Has your character had their own movie or show (main character/villain with name in title) in the last 15 years?
	26. Does your character have an unearthly skin color?
	27. Does your character look like a regular human being underneath their hero identity?
	28. Can your character shapeshift their form?
	29. Is your character considered royalty or a ruler where they're from?
	30. Does your character wear clothes?
	31. Is your character immune to bullets? (If they usually wear bulletproof armor, say yes)
	32. Is your character typically considered a sidekick or helper to someone else?
	33. Is your character currently considered defeated or deceased in the movie universe?
	34. Is your characer predominantly blue in their skin or uniform?
	35. Is your character clearly based on mythology?
	36. Is your character an agent or government official?
	37. Is your character parent or guardian to more important hero?
	38. Is your character generally considered neutral or a bystander to the fighting?
	*/

	// THE FINAL GAUNTLET: NONE SHALL PASS
	if (currentAnswers == "11010000011001111011011110100110000000") 
	{
		std::cout << "I think your character was... Batman!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11110100010010000101001010101110010000") 
	{
		std::cout << "I think your character was... Superman!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10010100010010000110001010101110011000") 
	{
		std::cout << "I think your character was... Wonder Woman!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000100011110000011001000100100000000") 
	{
		std::cout << "I think your character was... the Flash!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000100010000000110100000101100001000") 
	{
		std::cout << "I think your character was... Aquaman!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01000000000001101011010000100100000000") 
	{
		std::cout << "I think your character was... Lex Luthor!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01000000000001011011010000100100100000") 
	{
		std::cout << "I think your character was... Ra's al Ghul!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01000000001001010110010000100100100000") 
	{
		std::cout << "I think your character was... Bane!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01000000000000001011010001000100000000") 
	{
		std::cout << "I think your character was... the Joker!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00000000000011010011000000000101000000") 
	{
		std::cout << "I think your character was... Harley Quinn!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000000000001000010000000100101000001") 
	{
		std::cout << "I think your character was... Alfred!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11010000001111010011011100100101000000") 
	{
		std::cout << "I think your character was... Robin!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10100100000100000100100001001100000000") 
	{
		std::cout << "I think your character was... Starfire!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10110100001101000000100101100100010000") 
	{
		std::cout << "I think your character was... Raven!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000100000101000010000101010100000000") 
	{
		std::cout << "I think your character was... Beast Boy!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000000010100001111010000000100000000") 
	{
		std::cout << "I think your character was... Cyborg!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11101001001010101011010010100110000000") 
	{
		std::cout << "I think your character was... Iron Man!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001001001010010111100010100100010000") 
	{
		std::cout << "I think your character was... Captain America!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11111101000010000100000010101100001000") 
	{
		std::cout << "I think your character was... Thor!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001101001110001111011110100100010000") 
	{
		std::cout << "I think your character was... Spider-Man!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001101000000001111001011010110000000") 
	{
		std::cout << "I think your character was... Hulk!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10001001000001010011000100100100000100") 
	{
		std::cout << "I think your character was... Black Widow!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001001000001000011010000100100000100") 
	{
		std::cout << "I think your character was... Nick Fury!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10001000000000000011000000100101000001") 
	{
		std::cout << "I think your character was... Pepper Potts!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11111100000011100011100010100100000000") 
	{
		std::cout << "I think your character was... Doctor Strange !";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001000001001110010010110101110000000") 
	{
		std::cout << "I think your character was... Black Panther!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001001000001010011010100100100000100") 
	{
		std::cout << "I think your character was... Hawkeye!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001000001010000011010110110100000000") 
	{
		std::cout << "I think your character was... Ant-Man!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11101000101011000011010000100100000000") 
	{
		std::cout << "I think your character was... Star Lord!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10001000100101010000000001001100000000") 
	{
		std::cout << "I think your character was... Gamora!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001100100000000000000101010001000000") 
	{
		std::cout << "I think your character was... Groot!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001000100110000010010101000101000000") 
	{
		std::cout << "I think your character was... Rocket Raccoon!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001100100010000100000001000110000000") 
	{
		std::cout << "I think your character was... Drax!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01011100000000000000110000101100001000") 
	{
		std::cout << "I think your character was... Loki!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01101000000000001111010011000010100000") 
	{
		std::cout << "I think your character was... Ultron!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01101100001000001100100001001110010000") 
	{
		std::cout << "I think your character was... Thanos!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10001000000001010111000010100100000000") 
	{
		std::cout << "I think your character was... Jessica Jones!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001100000001010111000010100110000000") 
	{
		std::cout << "I think your character was... Luke Cage!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001000001010010011001010100100000000") 
	{
		std::cout << "I think your character was... Daredevil!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001110000000010111000110100110000000") 
	{
		std::cout << "I think your character was... Wolverine!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10111110000001000011000000100100000000") 
	{
		std::cout << "I think your character was... Storm!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001110000000001011010000100100000000") 
	{
		std::cout << "I think your character was... Professor Xavier!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01111100001010000010000000100110000000") 
	{
		std::cout << "I think your character was... Magneto!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001010000010000") 
	{
		std::cout << "I think your character was... Mystique!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000100100100000000") 
	{
		std::cout << "I think your character was... Phoenix / Jean Grey!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000000100001000") 
	{
		std::cout << "I think your character was... Cyclops!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000101010100010000") 
	{
		std::cout << "I think your character was... Beast!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000011001110010000") 
	{
		std::cout << "I think your character was... Apocalypse!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001000110100000") 
	{
		std::cout << "I think your character was... Doctor Doom!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001000110010000") 
	{
		std::cout << "I think your character was... the Thing!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000110100010000") 
	{
		std::cout << "I think your character was... the Human Torch!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000110100010000") 
	{
		std::cout << "I think your character was... Mr. Fantastic!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000110100010000") 
	{
		std::cout << "I think your character was... the Invisible Woman!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000011000010000000") 
	{
		std::cout << "I think your character was... the Silver Surfer!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100101000100") 
	{
		std::cout << "I think your character was... Agent Phil Coulson!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000101100110000") 
	{
		std::cout << "I think your character was... Killmonger!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000101100101010") 
	{
		std::cout << "I think your character was... Odin!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000101100111011") 
	{
		std::cout << "I think your character was... Frigga!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100001000") 
	{
		std::cout << "I think your character was... Heimdall!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000000") 
	{
		std::cout << "I think your character was... Scarlet Witch!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100110000") 
	{
		std::cout << "I think your character was... Quicksilver!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000000001100001") 
	{
		std::cout << "I think your character was... J.A.R.V.I.S.!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100111010100") 
	{
		std::cout << "I think your character was... War Machine!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000001") 
	{
		std::cout << "I think your character was... Dr. Erik Selvigg!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000010000101000100") 
	{
		std::cout << "I think your character was... the Winter Soldier!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000010100100100100") 
	{
		std::cout << "I think your character was... Agent Peggy Carter!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01001000000001000110010001000100100100") 
	{
		std::cout << "I think your character was... Red Skull!";
		std::cout << std::endl;
		std::cout << "*psst* Come closer...";
		std::cout << std::endl;
		std::cout << "Hail Hydra";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000100100101000000") 
	{
		std::cout << "I think your character was... Falcon!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001001100010000") 
	{
		std::cout << "I think your character was... Nebula!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001001100100000") 
	{
		std::cout << "I think your character was... Ronan!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000001") 
	{
		std::cout << "I think your character was... the Collector!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001000100110000") 
	{
		std::cout << "I think your character was... Yondu!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001000100000000") 
	{
		std::cout << "I think your character was... Vision!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000101100100000") 
	{
		std::cout << "I think your character was... The Ancient One!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001001010000000") 
	{
		std::cout << "I think your character was... Dormammu!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000011110100010") 
	{
		std::cout << "I think your character was... Ego!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000100000100000001") 
	{
		std::cout << "I think your character was... Mantis!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000101100010001") 
	{
		std::cout << "I think your character was... the Grandmaster!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000101100100000") 
	{
		std::cout << "I think your character was... Hela!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100010000") 
	{
		std::cout << "I think your character was... Valkyrie!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000001") 
	{
		std::cout << "I think your character was... Hank Pym!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000011") 
	{
		std::cout << "I think your character was... Aunt May!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100100011") 
	{
		std::cout << "I think your character was... Uncle Ben!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000001") 
	{
		std::cout << "I think your character was... Mary Jane!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01001100001001000100000101010010100000") 
	{
		std::cout << "I think your character was... Venom!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01001100000000000111000001110110100000") 
	{
		std::cout << "I think your character was... the Sandman!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100110100000") 
	{
		std::cout << "I think your character was... the Green Goblin!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000101000100000000") 
	{
		std::cout << "I think your character was... Poison Ivy !";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001100100010000") 
	{
		std::cout << "I think your character was... Mr. Freeze!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000110100100000000") 
	{
		std::cout << "I think your character was... Catwoman!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000100100100000000") 
	{
		std::cout << "I think your character was... Penguin!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100100000") 
	{
		std::cout << "I think your character was... Scarecrow!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000000100100000") 
	{
		std::cout << "I think your character was... Two-Face!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001001110000000") 
	{
		std::cout << "I think your character was... Darkseid!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001010010010000") 
	{
		std::cout << "I think your character was... Doctor Manhattan!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000000100100000") 
	{
		std::cout << "I think your character was... the Comedian!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100100000") 
	{
		std::cout << "I think your character was... Rorshach!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001000100100000") 
	{
		std::cout << "I think your character was... Nightcrawler!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000000") 
	{
		std::cout << "I think your character was... Pyro!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000001000100110000") 
	{
		std::cout << "I think your character was... Electro!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000000100100000000") 
	{
		std::cout << "I think your character was... Kingpin!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000010100110000000") 
	{
		std::cout << "I think your character was... Green Lantern!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "00001110000100010011000101000100000000") 
	{
		std::cout << "I think your character was... Killer Croc!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001100001011010011001011000110000000") 
	{
		std::cout << "I think your character was... Deadpool!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000000001001000011001010100100000000") 
	{
		std::cout << "I think your character was... Green Arrow!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01001100001011000100000000000110010000") 
	{
		std::cout << "I think your character was... Galactus!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000000001101010011011000100101010000") 
	{
		std::cout << "I think your character was... Nightwing!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "10010000001101010011011100100101010000") 
	{
		std::cout << "I think your character was... Batgirl!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000000000001000011000000100101000101") 
	{
		std::cout << "I think your character was... Commissioner Gordon!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11110100010010001100000001000110000000") 
	{
		std::cout << "I think your character was... Martian Manhunter!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01001000000000001011010100100100100000") 
	{
		std::cout << "I think your character was... Doctor Octopus!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01000000001000000011000000100100000000") 
	{
		std::cout << "I think your character was... the Riddler!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01000000001001010010000000100100000000") 
	{
		std::cout << "I think your character was... Shredder!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11000000001100010011000111000000000000") 
	{
		std::cout << "I think your character was... the Teenage Mutant Ninja Turtles!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01001100000010000100000101010010000000") 
	{
		std::cout << "I think your character was... Carnage!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "11001000000000000011000000100100000001") 
	{
		std::cout << "I think your character was... J. Jonah Jameson!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01100100000001000100010000101110100000") 
	{
		std::cout << "I think your character was... General Zod!";
		std::cout << std::endl;
	} 
	else if (currentAnswers == "01101000001000000011010100100100100000")
	{
		std::cout << "I think your character was... Vulture!";
		std::cout << std::endl;
	}
	else if (currentAnswers == "01001101000010001111000001110110000000")
	{
		std::cout << "I think your character was... Red Hulk!";
		std::cout << std::endl;
	}
	else if (currentAnswers == "01000100001001000100100001000110100000")
	{
		std::cout << "I think your character was... Steppenwolf!";
		std::cout << std::endl;
	}
	else 
	{
		std::cout << "Hmm... I couldn't figure it out! Congratulations, you beat the game! Either that, or you answered a few questions wrong...";
		std::cout << std::endl;
	}
	
	
}
			
		
