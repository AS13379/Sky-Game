#include <iostream>
using namespace std;

string player_profile[6][2];
int menu;

void output_player_profile(){
	for (int i = 0;i < 6; i++){
		for (int j = 0; j < 2; j++){
	
    cout << player_profile[i][j];}}
}

int main(){
    cout << "********************" << endl << "欢迎游玩诸神之战！" << endl << "****************" << endl << "这是一个开源项目，它来自Vperfact！" << endl << "https://github.com/AS13379/Sky-Game" << endl << "****************" << endl << " - 菜单 - " << endl << "0.生成个人信息文件" << endl << "1.选择你的技能" << endl << "2.修改你的技能" << endl << "****************" << endl << "3.生成对手配置文件" << endl << "4.导入自己的角色信息" << endl << "5.导入对手角色信息" << endl << "********************" << endl;
	cout << "请输入数字>>>";
	cin >> menu;
	
	return 0;
}
