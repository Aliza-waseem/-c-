#include<iostream>
#include<string>

using namespace std;

void showpersonalityReport(string personalitytype){
	string strength ,weakness;	
	if(personalitytype=="A"){
        strength = "Sparklingly Creative, Bursting with Energy, Always Up for Fun!";
        weakness = "A Bit Too Spontaneous, Super Dreamy, Scattered at Times";
    }
	
	else if(personalitytype=="B"){
		strength = "Brilliantly Sharp, Master of Logic, Amazingly Observant!";
        weakness = "Sometimes Too Picky, Can’t Pick a Side, Feels a Bit Distant";
	}
	else if(personalitytype=="C"){
	    strength = "Heartfelt and Caring, Full of Kindness, Your Biggest Cheerleader!";
        weakness = "Feels Everything Deeply, Gives Too Much, Shy About Conflicts";
	}
	else if(personalitytype=="D"){
		strength = "Perfectly Organized, Rock-Solid Reliable, Wonderfully Practical!";
        weakness = "Loves Routine Too Much, A Tad Stubborn, Plays It Extra Safe";
	}
	cout<<"*****PERSONALITY REPORT\n******";
	cout<<"YOUR PERSONALITY TYPE:"<<personalitytype<<endl;
	cout<<"STRENGTHS:"<<strength<<endl;
	cout<<"WEAKNESS:"<<weakness<<endl;
	cout<<"-------------------------";
}
string analyzeResponses(int responses[], int size){

	int scoreA=0,scoreB=0,scoreC=0,scoreD=0;
	for(int i=0;i<size;i++){
		if (i % 4 == 0) scoreA += responses[i];
        else if (i % 4 == 1) scoreB += responses[i];
        else if (i % 4 == 2) scoreC += responses[i];
        else if (i % 4 == 3) scoreD += responses[i];

	}
	 if (scoreA >= scoreB && scoreA >= scoreC && scoreA >= scoreD) return "A";
    if (scoreB >= scoreA && scoreB >= scoreC && scoreB >= scoreD) return "B";
    if (scoreC >= scoreA && scoreC >= scoreB && scoreC >= scoreD) return "C";
    return "D";


}
int main()
{
  string questions[8] = 
  { "Are you thrilled to try new adventures and take bold risks? (1 = Not at all, 5 = Absolutely)\n",
     "Do you love spotting tiny details that others often overlook? (1 = Nope, 5 = Totally)\n",
     "Are you super in tune with others’ feelings and emotions? (1 = Not really, 5 = Very much)\n",
    "Do you get a kick out of planning every detail ahead of time? (1 = Never, 5 = Always)\n",
     "Do you shine as the life of the party in social settings? (1 = Not at all, 5 = Always)\n",
     "Are you a fan of cracking tough and tricky challenges? (1 = Not my thing, 5 = Love it)\n",
     "Do you always put others’ needs ahead of your own? (1 = Rarely, 5 = All the time)\n",
     "Do you crave a neat, organized, and structured space? (1 = Not really, 5 = Definitely)\n",
    };
 int responses[8];

    cout<< "*****Welcome to PsychePulse - Personality Analysis System*****\n";
    cout<< "Please answer the following questions on a scale of 1 to 5:\n";
    cout<<"Are you ready to give the answers of 8 questions\n";
    string y_n;
    cout<<"yes/no\n";
    cin>>y_n;
	
	if(y_n=="yes"||y_n=="YES"||y_n=="Yes"){
	
    for (int i = 0; i < 8; i++) {
        int response;
        cout << questions[i] << endl;
        cin >> response;
        while (response < 1 || response > 5) {
            cout << "Invalid input. Please enter a number between 1 and 5.\n";
            cin >> response;
        }
        responses[i] = response;
    }

    
    string personalityType = analyzeResponses(responses, 8);
    showpersonalityReport(personalityType);
	}
	
	else if(y_n=="no"||y_n=="NO"||y_n=="No"){
		cout << "Alright, no worries! Come back when you're ready. Goodbye! ??\n";
    return 0;
	}

}











	
	

