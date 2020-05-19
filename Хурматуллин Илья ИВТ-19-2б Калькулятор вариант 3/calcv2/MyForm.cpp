#include "MyForm.h"
using namespace calcv2;
int main(){
//здесь текст только для отображения формы
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
Application::Run(gcnew MyForm);
return 0;
}