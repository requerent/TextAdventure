#pragma once

struct Reply
{
	unsigned int reply;
	unsigned int next_prompt;
};

struct Prompt
{
	unsigned int prompt;
	Reply replies[4];
};



int TwoChoices(char *prompt, char *choice1, char *choice2);