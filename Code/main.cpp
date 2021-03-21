/* Game made by Bana-code, Banana Code, Bana#3175
Discord: https://discord.gg/ua76vwxPv6
Suggestion is not being responded */

#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    string arr [15][15];
    int x, y;
    int k = 3, l = 2;
    char playing;
    int score = 0;

    for (x = 0; x < 15; x++)
    {
        for (y = 0; y < 15; y++)
        {


        }

    }


    // design
    for (x = 0; x < 15; x++)
    {
        for (y = 0; y < 15; y++)
        {
            if (x == 0 || x == 14)
            {
                arr [x] [y] = "-";
            }
            else if (y == 0 || y == 14)
            {
                arr [x] [y] = "|";
            }
            else if (x == 6 && y > 2 && y < 9)
			{
				arr [x] [y] = "#";
			}
			else if (x == 3 && y > 3 && y < 10)
			{
				arr [x] [y] = "#";
			}
			else if (x == 7 && y > 9 && y < 12)
			{
				arr [x] [y] = "#";
			}
			else if (x == 9 && y > 7 && y < 12)
			{
				arr [x] [y] = "#";
			}
			else if (x == 11 && y > 5 && y < 7)
			{
				arr [x] [y] = "#";
			}
			else if (x == 5 && y > 6 && y < 5)
			{
				arr [x] [y] = "#";
			}
			else if (x == 10 && y > 4 && y < 14)
			{
				arr [x] [y] = "#";
			}
            else
            {
            	arr [12] [12] = "X";
            	
                arr [x] [y] = ".";
            }

        }
    }



    // printing
    arr [k][l] = "@";
    cout << "\t\t\t Seeds you dug up: " << score;
    cout << endl;
    for (x = 0; x < 15; x++)
    {
        for (y = 0; y < 15; y++)
        {
            cout << arr [x][y] << "";
        }
        cout << endl;    	
    }
    while (true)
	{
		cout << "\nEnter a key (w,a,s,d): ";
		cin >> playing;
		arr [k][l] = "@";
		
		if (playing == 's')
		{
			k++;
			if (k > 0)
			{
				arr [k -1][l] = "*";
			}
		}
		
		if (playing == 'w')
		{
			k--;
			if (k > 0)
			{
				arr [k +1][l] = "*";
			}
		}
		
		if (playing == 'a')
		{
			l--;
			if (k > 0)
			{
				arr [k][l + 1] = "*";
			}
	 	}
	 	
	 	if (playing == 'd')
		{
			l++;
			if (k > 0)
			{
				arr [k][l - 1] = "*";
			}
	 	}
	 	
		if (arr [k][l] == "X")
		{
			system ("cls");
			cout << "Thank you Gordon for cleaning up you may now leave :)";
			cin;
			break;
		}
		
		if (arr [k][l] == "#")
		{
			system ("cls");
			cout << "Gordon are you alright? You bumped to the wall pretty hard :(";
			cin;
			break;
		}
		
		if (arr [k][l] == "-")
		{
			system ("cls");
			cout << "Gordon are you alright? You bumped to the wall pretty hard :(";
			cin;
			break;
		}
		
		if (arr [k][l] == "|")
		{
			system ("cls");
			cout << "Gordon are you alright? You bumped to the wall pretty hard :(";
			cin;
			break;
		}
		
		if (arr [k][l] == "*")
		{
			score += 1;
		}
		
		system ("cls");
    cout << "\t\t Dug Up Gordon - Made by: Bana-Code AKA Bana#3175 (discord.gg/ua76vwxPv6)" << endl;
		cout << "\t\t\t Seeds you dug up: " << score;
    	cout << endl;
	    for (x = 0; x < 15; x++)
	    {
	        for (y = 0; y < 15; y++)
	        {
	            cout << arr [x][y] << "";
	        }
	        cout << endl;    	
	    }
	}

}
