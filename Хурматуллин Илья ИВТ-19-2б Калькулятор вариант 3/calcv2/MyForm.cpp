#include "MyForm.h"
using namespace calcv2;
int main(){
//����� ����� ������ ��� ����������� �����
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
Application::Run(gcnew MyForm);
return 0;
}