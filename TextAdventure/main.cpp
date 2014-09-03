#include <iostream>
#include "Dialog.h"
using namespace std;

Prompt DIALOG_MAP[]
= 
{
	{ 0, { { 1, 4 }, { 2, 5 }, { 3, 6 } } },
	{ 4, { { 1, 0 }, { 2, 0 }, { 3, 0 } } }
}



/*
	Prompt
		-> Replies -> Prompt
					  -> Replies
					  -> Replies
		-> Replies -> Prompt
					  -> Replies
		-> Replies -> Prompt
					  -> Replies


*/
char Dialog[]
= {
	"What is your favorite color?", //prompt 0
		"Red",						//replies 1, 2, 3
		"Green",					//leads to
		"Blue",					    //prompts at 44, 5, 6
	"Why would you like the color red?!",
	"Blue is so wonderful! You must be great.",
	"Green is so silly..."
};






int main()
{

}