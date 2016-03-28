#include <iostream>
#include "GameObjects.h"
#include "GOList.h"

using namespace std;
using namespace bab;

GO_List GameObjList;

int main()
{
	int x;

	GameObjList.createObject("player");
	GameObjList.createObject("camera");
	GameObjList.changeID("camera", "movieStar");

	GameObjList.createObject("Gun");
	
	

	for (std::vector<std::string>::iterator i = GameObjList.goNameList.begin(); i != GameObjList.goNameList.end(); i++)
	{
		cout << (*i).c_str() << endl;

	}


	system("pause");
	return 0;
}


