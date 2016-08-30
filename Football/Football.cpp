// Football.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Individual
{
private:
	int age;
	string name;
	double salary;
	int contract_lenght;
	string team;
public:
	void Individual_construct()
	{
		age = 0;
		name = "";
		salary = 0;
		contract_lenght = 0;
		team = "";
	};
	virtual void addIndividual();
	string getName()
	{
		return name;
	}
	void setAge(int value)
	{
		age = value;
	}
	void setName(string value)
	{
		name = value;
	}
	void setSalary(double value)
	{
		salary = value;
	}
	void setContract_lenght(int value)
	{
		contract_lenght = value;
	}
	string getTeam()
	{
		return team;
	}
	void setTeam(string value)
	{
		team = value;
	}	
	int getAge()
	{
		return age;
	}
	double getSalary()
	{
		return salary;
	}
};
void Individual::addIndividual()
{
	string name, age_S, salary_S, lenght_S;
	int age, lenght;
	double saraty;
	cout << "\nName: ";
	getline(cin, name);
	setName(name);
	do
	{
		cout << "\nAge: ";
		getline(cin, age_S);
		age = atoi(age_S.c_str());
		if (age < 1)
			cout << "Wrong Input\n";
	} while (age < 1);
	setAge(age);

	do
	{
		cout << "\nSalary: ";
		getline(cin, salary_S);
		salary = atof(salary_S.c_str());
		if (salary < 1)
			cout << "Wrong Input\n";
	} while (salary < 1);
	setSalary(salary);

	do
	{
		cout << "\nLenght of the contract: ";
		getline(cin, lenght_S);
		lenght = atoi(lenght_S.c_str());
		if (lenght < 1)
			cout << "Wrong Input\n";
	} while (lenght < 1);
	setContract_lenght(lenght);
}

class Player : public Individual
{
private:
	int stamina;
	int experience;
	int loyalty;
	int TA_index; //Total ability index
	int form;
	string specialty;
	bool injury;
	int injury_lenght;
	string prefered_foot;

public:
	Player();
	virtual void addPlayer();
	void setStamina(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		stamina = value;
	}
	void setExperience(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		experience = value;
	}
	void setLoyalty(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		loyalty = value;
	}
	void setTAI(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		TA_index = value;
	}
	void setForm(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		form = value;
	}
	void setSpecialty(string value_s)
	{
		specialty = value_s;
	}
	void setInjury(string value_s)
	{
		if (value_s == "Yes" || value_s == "yes")
		{
			injury = true;
		}
		else
		{
			injury = false;
		}
	}
	void setInjuryLen(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		injury_lenght = value;
	}
	void setPreferedFoot(string value_s)
	{
		prefered_foot = value_s;
	}
	int getStamina()
	{
		return stamina;
	}
	int getTAIndex()
	{
		return TA_index;
	}
	string getPreferedFoot()
	{
		return prefered_foot;
	}
};
Player::Player()
{

}
void Player::addPlayer()
{
	string input;
	addIndividual();

	do
	{
		cout << "\nStamina: ";
		getline(cin, input);
		setStamina(input);
		if (stamina < 1)
			cout << "Wrong Input\n";
	} while (stamina < 1);

	do
	{
		cout << "\nExperience: ";
		getline(cin, input);
		setExperience(input);
		if (experience < 1)
			cout << "Wrong Input\n";
	} while (experience < 1);

	do
	{
		cout << "\nLoyalty: ";
		getline(cin, input);
		setLoyalty(input);
		if (loyalty < 1)
			cout << "Wrong Input\n";
	} while (loyalty < 1);

	do
	{
		cout << "\nAbility index: ";
		getline(cin, input);
		setTAI(input);
		if (TA_index < 1)
			cout << "Wrong Input\n";
	} while (TA_index < 1);

	do
	{
		cout << "\nForm: ";
		getline(cin, input);
		setForm(input);
		if (form < 1)
			cout << "Wrong Input\n";
	} while (form < 1);

	cout << "\nSpecialty: ";
	getline(cin, input);
	setSpecialty(input);

	input = "";
	while (input != "yes" && input != "Yes" && input != "no" && input != "No")
	{
		cout << "\nInjury (Yes/No): ";
		getline(cin, input);
	}
	setInjury(input);

	if (input == "yes" || input == "Yes")
	{
		do
		{
			cout << "\nInjury lenght: ";
			getline(cin, input);
			setInjuryLen(input);
			if (injury_lenght < 1)
				cout << "Wrong Input\n";
		} while (injury_lenght < 1);
	}

	cout << "\nPrefered foot: ";
	getline(cin, input);
	setPreferedFoot(input);
}

class Striker : public Player
{
private:
	int finishing;
	int free_kick;
	int shot_power;
	int long_shot;
	int heading;

public:
	Striker();
	virtual void addStriker();
	void setFinishing(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		finishing = value;
	}
	void setFreeKick(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		free_kick = value;
	}
	void setShot(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		shot_power = value;
	}
	void setLongShot(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		long_shot = value;
	}
	void setHeading(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		heading = value;
	}
	void setFinishing(int value)
	{
		finishing = value;
	}
	int getFinishing()
	{
		return finishing;
	}
	int getFreeKick()
	{
		return free_kick;
	}
	int getShotPower()
	{
		return shot_power;
	}
	int getLongShot()
	{
		return long_shot;
	}
	int getHeading()
	{
		return heading;
	}
};
Striker::Striker()
{

}
void Striker::addStriker()
{
	string input;
	addPlayer();

	do
	{
		cout << "\nFinishing: ";
		getline(cin, input);
		setFinishing(input);
		if (finishing < 1)
			cout << "Wrong Input\n";
	} while (finishing < 1);

	do
	{
		cout << "\nFree kick: ";
		getline(cin, input);
		setFreeKick(input);
		if (free_kick < 1)
			cout << "Wrong Input\n";
	} while (free_kick < 1);

	do
	{
		cout << "\nShot power: ";
		getline(cin, input);
		setShot(input);
		if (shot_power < 1)
			cout << "Wrong Input\n";
	} while (shot_power < 1);

	do
	{
		cout << "\nLong shots: ";
		getline(cin, input);
		setLongShot(input);
		if (long_shot < 1)
			cout << "Wrong Input\n";
	} while (long_shot < 1);

	do
	{
	cout << "\nHeading: ";
	getline(cin, input);
	setHeading(input);
	if (heading < 1)
		cout << "Wrong Input\n";
	} while (heading < 1);
}

class Midfielder : public Player
{
private:
	int speed;
	int accelaration;
	int dribling;
	int long_pass;
	int short_pass;
	int crossing;
public:
	Midfielder();
	virtual void addMidfielder();
	void setSpeed(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		speed = value;
	}
	void setAccelaration(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		accelaration = value;
	}
	void setDribling(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		dribling = value;
	}
	void setDribling(int value)
	{
		dribling = value;
	}
	int getDribling()
	{
		return dribling;
	}
	void setLongPass(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		long_pass = value;
	}
	void setShortPass(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		short_pass = value;
	}
	void setCrossing(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		crossing = value;
	}
	int getSpeed()
	{
		return speed;
	}
	int getAccelaration()
	{
		return accelaration;
	}
	int getLongPass()
	{
		return long_pass;
	}
	int getShortPass()
	{
		return short_pass;
	}
	int getCrossing()
	{
		return crossing;
	}
};
Midfielder::Midfielder()
{

}
void Midfielder::addMidfielder()
{
	string input;
	addPlayer();

	do
	{
	cout << "\nSpeed: ";
	getline(cin, input);
	setSpeed(input);
	if (speed < 1)
		cout << "Wrong Input\n";
	} while (speed < 1);

	do
	{
	cout << "\nAccelaration: ";
	getline(cin, input);
	setAccelaration(input);
	if (accelaration < 1)
		cout << "Wrong Input\n";
	} while (accelaration < 1);

	do
	{
	cout << "\nDribling: ";
	getline(cin, input);
	setDribling(input);
	if (dribling < 1)
		cout << "Wrong Input\n";
	} while (dribling < 1);

	do
	{
		cout << "\nLong pass: ";
		getline(cin, input);
		setLongPass(input);
		if (long_pass < 1)
			cout << "Wrong Input\n";
	} while (long_pass < 1);

	do
	{
	cout << "\nShort pass: ";
	getline(cin, input);
	setShortPass(input);
	if (short_pass < 1)
		cout << "Wrong Input\n";
	} while (short_pass < 1);

	do
	{
		cout << "\nCrossing: ";
		getline(cin, input);
		setCrossing(input);
		if (crossing < 1)
			cout << "Wrong Input\n";
	} while (crossing < 1);
}

class Defender : public Player
{
private:
	int heading;
	int tackling;
	int strenght;
public:
	Defender();
	virtual void addDefender();
	void setHeading(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		heading = value;
	}
	void setTackling(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		tackling = value;
	}
	void setStrenght(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		strenght = value;
	}
	void setTackling(int value)
	{
		tackling = value;
	}
	int getTackling()
	{
		return tackling;
	}
	int getHeading()
	{
		return heading;
	}
	int getStrenght()
	{
		return strenght;
	}
};
Defender::Defender()
{

}
void Defender::addDefender()
{
	string input;
	addPlayer();

	do
	{
	cout << "\nHeading: ";
	getline(cin, input);
	setHeading(input);
	if (heading < 1)
		cout << "Wrong Input\n";
	} while (heading < 1);

	do
	{
	cout << "\nTackling: ";
	getline(cin, input);
	setTackling(input);
	if (tackling < 1)
		cout << "Wrong Input\n";
	} while (tackling < 1);

	do
	{
	cout << "\nStrenght: ";
	getline(cin, input);
	setStrenght(input);
	if (strenght < 1)
		cout << "Wrong Input\n";
	} while (strenght < 1);
}

class Goalkeeper : public Player
{
private:
	int positioning;
	int diving;
	int reflex;

public:
	Goalkeeper();
	virtual void addGoalkeeper();
	void setPositioning(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		positioning = value;
	}
	void setDiving(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		diving = value;
	}
	void setReflex(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		reflex = value;
	}
	int getReflex()
	{
		return reflex;
	}
	void setReflex(int value)
	{
		reflex = value;
	}
	int getDiving()
	{
		return diving;
	}
	int getPositioning()
	{
		return positioning;
	}
};
Goalkeeper::Goalkeeper()
{

}
void Goalkeeper::addGoalkeeper()
{
	string input;
	addPlayer();

	do
	{
	cout << "\nPositioning: ";
	getline(cin, input);
	setPositioning(input);
	if (positioning < 1)
		cout << "Wrong Input\n";
	} while (positioning < 1);

	do
	{
	cout << "\nDiving: ";
	getline(cin, input);
	setDiving(input);
	if (diving < 1)
		cout << "Wrong Input\n";
	} while (diving < 1);

	do
	{
	cout << "\nReflex: ";
	getline(cin, input);
	setReflex(input);
	if (reflex < 1)
		cout << "Wrong Input\n";
	} while (reflex < 1);
}

class Coach :public Individual
{
private:
	int abilities;
	int tactics;
	int leadership;

public:
	Coach();
	void addCoach();
	void setAbilities(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		abilities = value;
	}
	void setTactics(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		tactics = value;
	}
	void setLeadership(string value_s)
	{
		int value;
		value = atoi(value_s.c_str());
		leadership = value;
	}
};
Coach::Coach()
{

}
void Coach::addCoach()
{
	string input;
	addIndividual();

	do
	{
		cout << "\nAbilities: ";
		getline(cin, input);
		setAbilities(input);
		if (abilities < 1)
			cout << "Wrong Input\n";
	} while (abilities < 1);

	do
	{
	cout << "\nTactics: ";
	getline(cin, input);
	setTactics(input);
	if (tactics < 1)
		cout << "Wrong Input\n";
	} while (tactics < 1);

	do
	{
	cout << "\nLeadership: ";
	getline(cin, input);
	setLeadership(input);
	if (leadership < 1)
		cout << "Wrong Input\n";
	} while (leadership < 1);
}

class League
{
private:
	string league;
public:
	void setLeague(string value)
	{
		league = value;
	}
	string getLeague()
	{
		return league;
	}
	void addLeague()
	{
		string leag;
		cout << "\nLeague: ";
		getline(cin, leag);
		setLeague(leag);
	}
};
class Team : public League
{private:
	Individual* player[11];
	Coach* coach;
	string name,stadium;
public:
	virtual void addTeam();
	void setName(string value)
	{
		name = value;
	}
	void setStadium(string value)
	{
		stadium = value;
	}
	string getName()
	{
		return name;
	}
	void addPlayer(string name)
	{
		for (int i = 0; i < 11; i++)
		{
			if (player[i]->getName() == "")
			{
				player[i]->setName(name);
				break;
			}
		}
	}
	void deletePlayer(string name)
	{
		for (int i = 0; i < 11; i++)
		{
			if (player[i]->getName() == name)
			{
				player[i]->Individual_construct();
				break;
			}
		}
	}
	void displayPlayers()
	{
		for (int i = 0; i < 11; i++)
		{
			cout << player[i]->getName() << endl;
		}
	}
	void addCoach(string name)
	{
		coach->setName(name);
	}
	string getCoach()
	{
		return coach->getName();
	}
};
void Team::addTeam()
{
	string input;
	addLeague();

	cout << "\nName: ";
	getline(cin, input);
	setName(input);

	cout << "\nStadium name: ";
	getline(cin, input);
	setStadium(input);

	for (int i = 0; i < 11; i++)
	{
		player[i] = new Individual();
	}

	coach = new Coach();
}



void createPlayer( vector<Goalkeeper*>& GK, vector<Defender*>& DEF, vector<Midfielder*>& MID, vector<Striker*>& ST, int& position)
{
	string choice_position_S;
	int  choice_position;
	do
	{
		system("CLS");
		cout << "Choose position\n";
		cout << "1) Goalkeeper\n";
		cout << "2) Defender\n";
		cout << "3) Midfielder\n";
		cout << "4) Striker\n";
		cout << "Choice: ";
		getline(cin, choice_position_S);
		choice_position = atoi(choice_position_S.c_str());
	} while (choice_position < 1 && choice_position>4);
	switch (choice_position)
	{
	case 1:
		GK.push_back(new Goalkeeper);
		GK.back()->addGoalkeeper();
		position = 1;
		break;
	case 2:
		DEF.push_back(new Defender);
		DEF.back()->addDefender();
		position = 2;
		break;
	case 3:
		MID.push_back(new Midfielder);
		MID.back()->addMidfielder();
		position = 3;
		break;
	case 4:
		ST.push_back(new Striker);
		ST.back()->addStriker();
		position = 4;
		break;
	default:
		break;
	}

}
void updateStats(string name, vector<Goalkeeper*> GK, vector<Defender*> DEF, vector<Midfielder*> MID, vector<Striker*> ST, vector <Team*> team)
{
	int value;
	for (int i = 0; i < GK.size(); i++)
	{
		if (GK.at(i)->getName() == name)
		{
			for (int j = 0; j < team.size(); j++)
			{
				if (GK.at(i)->getTeam() == team.at(j)->getName())
				{
					if (team.at(j)->getLeague() == "germany" || team.at(j)->getLeague() == "Germany")
					{
						value = GK.at(i)->getReflex();
						GK.at(i)->setReflex(value + 5);
					}
				}
			}
		}
	}
	for (int i = 0; i < DEF.size(); i++)
	{
		if (DEF.at(i)->getName() == name)
		{
			for (int j = 0; j < team.size(); j++)
			{
				if (DEF.at(i)->getTeam() == team.at(j)->getName())
				{
					if (team.at(j)->getName() == "italy" || team.at(j)->getName() == "Italy")
					{
						value = DEF.at(i)->getTackling();
						DEF.at(i)->setTackling(value + 5);
					}
				}
			}
		}
	}
	for (int i = 0; i < MID.size(); i++)
	{
		if (MID.at(i)->getName() == name)
		{
			for (int j = 0; j < team.size(); j++)
			{
				if (MID.at(i)->getTeam() == team.at(j)->getName())
				{
					if (MID.at(j)->getName() == "spain" || team.at(j)->getName() == "Spain")
					{
						value = MID.at(i)->getDribling();
						MID.at(i)->setDribling(value + 5);
					}
				}
			}
		}
	}
	for (int i = 0; i < ST.size(); i++)
	{
		if (ST.at(i)->getName() == name)
		{
			for (int j = 0; j < team.size(); j++)
			{
				if (ST.at(i)->getTeam() == team.at(j)->getName())
				{
					if (team.at(j)->getName() == "england" || team.at(j)->getName() == "England")
					{
						value = ST.at(i)->getFinishing();
						ST.at(i)->setFinishing(value + 5);
					}
				}
			}
		}
	}
}

int main()
{
#pragma region vars
	vector <Goalkeeper*> GK;
	vector <Defender*> DEF;
	vector <Midfielder*> MID;
	vector <Striker*> ST;
	vector <Team*> team;
	vector <Coach*> coach;
	string choice_S, choice_team_S, number_S, player_name;
	int position = 0,count=0;
	int choice, choice_team,number, position_choice, team_number;
#pragma endregion
#pragma region menu
	do
	{
		do
		{
			system("CLS");
			cout << "                           MENU";
			cout << "\n";
			cout << "1) Add new player\n";
			cout << "2) Create team\n";
			cout << "3) Add players/coach to a team\n";
			cout << "4) Search a player\n";
			cout << "5) Display the coach and the players in a specific team\n";
			cout << "6) Add new coach\n";
			cout << "7) EXIT\n";

			cout << "Choice: ";
			getline(cin, choice_S);
			choice = atoi(choice_S.c_str());
		} while (choice < 0 || choice>7);

		switch (choice)
		{

#pragma region case1
		case 1:
			createPlayer(GK,DEF, MID,ST,position);
			break;
#pragma endregion
#pragma region case2
		case 2:
			system("CLS");
			team.push_back(new Team);
			team.back()->addTeam();
			break;
#pragma endregion
#pragma region case3
		case 3:
			do
			{
				system("CLS");
				cout << "Choose team\n";
				for (int i = 0; i < team.size(); i++)
				{
					count++;
					cout << i + 1<<") " << team.at(i)->getName() << endl;
				}
				cout << "Chose team number: ";
				getline(cin, number_S);
				number = atoi(number_S.c_str());
				cout << "1) Add player\n";
				cout << "2) Create player\n";
				cout << "3) Transfer player\n";
				cout << "4) Add coach\n";
				cout << "Choice: ";
				getline(cin, choice_team_S);
				choice_team = atoi(choice_team_S.c_str());
			} while (choice_team < 1 && choice_team>4);
			switch (choice_team)
			{
#pragma region 3-1
			case 1:
				count = 0;
				cout << "\nChoose position";
				cout << "\n1) GK";
				cout << "\n2) Def";
				cout << "\n3) Mid";
				cout << "\n4) ST";
				cout << "\nChose position number: ";
				cin >> position_choice;
				if (position_choice==1)
				{
					for (int i = 0; i < GK.size(); i++)
					{
						if (GK.at(i)->getTeam() == "")
						{
							count++;
							cout << "\n"<<i+1<<") " << GK.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					GK.at(position_choice - 1)->setTeam(team.at(number-1)->getName());
					player_name = GK.at(position_choice - 1)->getName();
				}
				else if (position_choice == 2)
				{
					for (int i = 0; i < DEF.size(); i++)
					{
						if (DEF.at(i)->getTeam() == "")
						{
							count++;
							cout << "\n" << i + 1 << ") " << DEF.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					DEF.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
					player_name = DEF.at(position_choice - 1)->getName();
				}
				else if (position_choice == 3)
				{
					for (int i = 0; i < MID.size(); i++)
					{
						if (MID.at(i)->getTeam() == "")
						{
							count++;
							cout << "\n" << i + 1 << ") " << MID.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					MID.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
					player_name = MID.at(position_choice - 1)->getName();
				}
				else if (position_choice == 4)
				{
					for (int i = 0; i < ST.size(); i++)
					{
						if (ST.at(i)->getTeam() == "")
						{
							count++;
							cout << "\n" << i + 1 << ") " << ST.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					ST.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
					player_name = ST.at(position_choice - 1)->getName();
				}
				team.at(number - 1)->addPlayer(player_name);
				updateStats(player_name, GK, DEF, MID, ST, team);
				break;
#pragma endregion
#pragma region 3-2
			case 2:
				createPlayer(GK, DEF, MID, ST,position);
				if (position==1)
				{
					GK.at(GK.size()-1)->setTeam(team.at(number - 1)->getName());
					player_name = GK.at(GK.size() - 1)->getName();
				}
				else if(position == 2)
				{
					DEF.at(DEF.size() - 1)->setTeam(team.at(number - 1)->getName());
					player_name = DEF.at(DEF.size() - 1)->getName();
				}
				else if (position == 3)
				{
					MID.at(MID.size() - 1)->setTeam(team.at(number - 1)->getName());
					player_name = MID.at(MID.size() - 1)->getName();
				}
				if (position == 4)
				{
					ST.at(ST.size() - 1)->setTeam(team.at(number - 1)->getName());
					player_name = ST.at(ST.size() - 1)->getName();
				}
				team.at(number - 1)->addPlayer(player_name);
				updateStats(player_name, GK, DEF, MID, ST, team);
				break;
#pragma endregion
#pragma region 3-3
			case 3:
				count = 0;
				cout << "\nChoose a team to transfer from: " << endl;
				for (int i = 0; i < team.size(); i++)
				{
					cout << i + 1<<") " << team.at(i)->getName() << endl;
				}
				cout << "Number of the team: ";
				cin >> team_number;
				cout << "\nChoose position";
				cout << "\n1) GK";
				cout << "\n2) Def";
				cout << "\n3) Mid";
				cout << "\n4) ST";
				cout << "\nChose position number: ";
				cin >> position_choice;
				if (position_choice==1)
				{
					cout << "\nGK:" << endl;
					for (int i = 0; i < GK.size(); i++)
					{
						if (GK.at(i)->getTeam() == team.at(team_number - 1)->getName())
						{
							count++;
							cout << "\n" << i + 1 << ") " << GK.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					GK.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
					player_name = GK.at(position_choice - 1)->getName();
				}
				else if (position_choice==2)
				{
					cout << "\nDefenders:" << endl;
					for (int i = 0; i < DEF.size(); i++)
					{
						if (DEF.at(i)->getTeam() == team.at(team_number - 1)->getName())
						{
							count++;
							cout << "\n" << i + 1 << ") " << DEF.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					DEF.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
					player_name = DEF.at(position_choice - 1)->getName();
				}
				else if (position_choice==3)
				{
					cout << "\nMidfielders:" << endl;
					for (int i = 0; i < MID.size(); i++)
					{
						if (MID.at(i)->getTeam() == team.at(team_number - 1)->getName())
						{
							count++;
							cout << "\n" << i + 1 << ") " << MID.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					MID.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
					player_name = MID.at(position_choice - 1)->getName();
				}
				else if (position_choice == 4)
				{
					cout << "\nStrikers:" << endl;
					for (int i = 0; i < ST.size(); i++)
					{
						if (ST.at(i)->getTeam() == team.at(team_number - 1)->getName())
						{
							count++;
							cout << "\n" << i + 1 << ") " << ST.at(i)->getName();
						}
					}
					if (count == 0)
						break;
					cout << "\nChose player number: ";
					cin >> position_choice;
					ST.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
					player_name = ST.at(position_choice - 1)->getName();
				}	
				for (int i = 0; i < team.size(); i++)
				{
					if (team.at(i)->getName() == team.at(team_number-1)->getName())
					{
						team.at(i)->deletePlayer(player_name);
					}
				}
				team.at(number - 1)->addPlayer(player_name);
				updateStats(player_name, GK, DEF, MID, ST, team);
				break;
#pragma endregion
#pragma region 3-4
			case 4:
				count = 0;
				for (int i = 0; i < coach.size(); i++)
				{
					if (coach.at(i)->getTeam() == "")
					{
						count++;
						cout << "\n" << i + 1 << ") " << coach.at(i)->getName();
					}
				}
				if (count == 0)
					break;
				cout << "\nChose player number: ";
				cin >> position_choice;
				coach.at(position_choice - 1)->setTeam(team.at(number - 1)->getName());
				player_name = coach.at(position_choice - 1)->getName();
				team.at(number - 1)->addCoach(player_name);
				break;
#pragma endregion
			default:
				break;
			}
			break;
#pragma endregion
#pragma region case4
			case 4:
				system("CLS");
				cout << "Name: ";
				cin >> player_name;
				system("CLS");
				for (int i = 0; i < GK.size(); i++)
				{
					if (GK.at(i)->getName() == player_name)
					{
						cout << "Name: " << GK.at(i)->getName() << endl;
						cout << "Age: " << GK.at(i)->getAge() << endl;
						cout << "Team: " << GK.at(i)->getTeam() << endl;
						cout << "Salary: " << GK.at(i)->getSalary() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Stamina: " << GK.at(i)->getStamina() << endl;
						cout << "Total ability index: " << GK.at(i)->getTAIndex() << endl;
						cout << "Preferred foot: " << GK.at(i)->getPreferedFoot() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Positioning: " << GK.at(i)->getPositioning() << endl;
						cout << "Diving: " << GK.at(i)->getDiving() << endl;
						cout << "Reflex: " << GK.at(i)->getReflex() << endl;
					}
				}
				for (int i = 0; i < DEF.size(); i++)
				{
					if (DEF.at(i)->getName() == player_name)
					{
						cout << "Name: " << DEF.at(i)->getName() << endl;
						cout << "Age: " << DEF.at(i)->getAge() << endl;
						cout << "Team: " << DEF.at(i)->getTeam() << endl;
						cout << "Salary: " << DEF.at(i)->getSalary() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Stamina: " << DEF.at(i)->getStamina() << endl;
						cout << "Total ability index: " << DEF.at(i)->getTAIndex() << endl;
						cout << "Preferred foot: " << DEF.at(i)->getPreferedFoot() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Heading: " << DEF.at(i)->getHeading() << endl;
						cout << "Tackling: " << DEF.at(i)->getTackling() << endl;
						cout << "Strenght: " << DEF.at(i)->getStrenght() << endl;
					}
				}
				for (int i = 0; i < MID.size(); i++)
				{
					if (MID.at(i)->getName() == player_name)
					{
						cout << "Name: " << MID.at(i)->getName() << endl;
						cout << "Age: " << MID.at(i)->getAge() << endl;
						cout << "Team: " << MID.at(i)->getTeam() << endl;
						cout << "Salary: " << MID.at(i)->getSalary() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Stamina: " << MID.at(i)->getStamina() << endl;
						cout << "Total ability index: " << MID.at(i)->getTAIndex() << endl;
						cout << "Preferred foot: " << MID.at(i)->getPreferedFoot() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Accelaration: " << MID.at(i)->getAccelaration() << endl;
						cout << "Dribling: " << MID.at(i)->getDribling() << endl;
						cout << "Long pass: " << MID.at(i)->getLongPass() << endl;
						cout << "Short pass: " << MID.at(i)->getShortPass() << endl;
						cout << "Crossing: " << MID.at(i)->getCrossing() << endl;
					}
				}
				for (int i = 0; i < ST.size(); i++)
				{
					if (ST.at(i)->getName() == player_name)
					{
						cout << "Name: " << ST.at(i)->getName() << endl;
						cout << "Age: " << ST.at(i)->getAge() << endl;
						cout << "Team: " << ST.at(i)->getTeam() << endl;
						cout << "Salary: " << ST.at(i)->getSalary() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Stamina: " << ST.at(i)->getStamina() << endl;
						cout << "Total ability index: " << ST.at(i)->getTAIndex() << endl;
						cout << "Preferred foot: " << ST.at(i)->getPreferedFoot() << endl;
						cout << "----------------------------------------------" << endl;
						cout << "Finishing: " << ST.at(i)->getFinishing() << endl;
						cout << "Free kick: " << ST.at(i)->getFreeKick() << endl;
						cout << "Shot power: " << ST.at(i)->getShotPower() << endl;
						cout << "Long shot: " << ST.at(i)->getLongShot() << endl;
						cout << "Heading: " << ST.at(i)->getHeading() << endl;
					}
				}
				cout << "\n\nEnter 0 to go back to the menu\n";
				do
				{
					cin >> number;
				} while (number != 0);
				break;
#pragma endregion
#pragma region case5
			case 5:
				system("CLS");
				cout << "Team: ";
				cin >> choice_team_S;
				for (int i = 0; i < team.size(); i++)
				{
					if (team.at(i)->getName() == choice_team_S)
					{
					cout << endl<<"Coach"<<endl;
					cout << team.at(i)->getCoach()<<endl;
					cout << "------------------------------------------"<<endl<<"Players"<<endl;
					
						team.at(i)->displayPlayers();
						cout << endl;
					}
				}
				cout << "\n\nEnter 0 to go back to the menu\n";
				do
				{
					cin >> number;
				} while (number != 0);
				break;
#pragma endregion
#pragma region case6
			case 6:
				coach.push_back(new Coach);
				coach.back()->addCoach();
				break;
#pragma endregion
		default:
			break;
		}
	} while (choice != 7);
#pragma endregion
    return 0;
}
