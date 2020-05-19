#pragma once
#include "Convector.h"
#include "Complex.h"

using namespace System;
std::string num1;
std::string num2;
double r, phi;




namespace calcv2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;



	protected:





















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		//сгенерированный код
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(94, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(201, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 20);
			this->textBox2->TabIndex = 1;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"-");
			this->domainUpDown1->Items->Add(L"*");
			this->domainUpDown1->Items->Add(L"/");
			this->domainUpDown1->Items->Add(L"+");
			this->domainUpDown1->Location = System::Drawing::Point(123, 79);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->ReadOnly = true;
			this->domainUpDown1->Size = System::Drawing::Size(72, 20);
			this->domainUpDown1->Sorted = true;
			this->domainUpDown1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(299, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(28, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(333, 80);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(198, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"         Второе\r\nкомплексное число";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"          Первое \r\nкомплексное число";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(375, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Ответ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(496, 80);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(113, 20);
			this->textBox4->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(615, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"√";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(496, 126);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(113, 20);
			this->textBox5->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(615, 126);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 20);
			this->button3->TabIndex = 9;
			this->button3->Text = L"^";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(659, 126);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(32, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(24, 127);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(93, 20);
			this->textBox7->TabIndex = 11;
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Items->Add(L"Exponential form");
			this->domainUpDown2->Items->Add(L"Trigonometric form");
			this->domainUpDown2->Location = System::Drawing::Point(123, 127);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->ReadOnly = true;
			this->domainUpDown2->Size = System::Drawing::Size(170, 20);
			this->domainUpDown2->Sorted = true;
			this->domainUpDown2->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(299, 125);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(28, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(333, 128);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(140, 20);
			this->textBox8->TabIndex = 14;		
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(659, 78);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"С";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(160, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"В какую форму\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(133, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Операции";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(375, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ответ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Алгебраическая \r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(519, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Квадратный корень";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(519, 110);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Возведение в степень";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(169, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(331, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Комплексное число должно быть представлено в виде z = x + yi";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(136, 22);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(461, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"где x - действительная часть комплексного числа, y - мнимая часть комплексного чи"
				L"сла\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(716, 167);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->domainUpDown2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Калькулятор комплексных чисел";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion




private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	complex_number convert_term1, convert_term2, convert_term3;
	 Convector_String_to_string(textBox1->Text->ToString(), num1);
	 Convector_String_to_string(textBox2->Text->ToString(), num2);	 
	convert_term1 = convert(num1);
	convert_term2 = convert(num2);
	char* z = "+";
	char* x = "-";
	char* c = "*";
	char* v = "/";
	//выполняем действие соответствующее считанному знаку
	if (domainUpDown1->Text == Convert_char_to_String(z)) //проверка на знак +
	{
		convert_term1.real += convert_term2.real;//складывает действительную часть первого числа с действительной частью второго числа
		convert_term1.imagine += convert_term2.imagine;//складывает мнимой частью первого числа с мнимой частью второго числа
		textBox3->Text = Convert::ToString(convert_term1.real) + (convert_term1.imagine >= 0 ? "+" : "") + Convert::ToString(convert_term1.imagine) + Convert::ToString("i");//Вывод ответа
	}
	else
	{
		if (domainUpDown1->Text == Convert_char_to_String(x)) //проверка на знак -
		{
			convert_term1.real -= convert_term2.real;
			convert_term1.imagine -= convert_term2.imagine;
			textBox3->Text = Convert::ToString(convert_term1.real) + (convert_term1.imagine >= 0 ? "+" : "") + Convert::ToString(convert_term1.imagine) + Convert::ToString("i");
		}
		else {
			if (domainUpDown1->Text == Convert_char_to_String(c)) //проверка на знак *
			{
				convert_term3.real = convert_term1.real;
				if (convert_term1.real == convert_term2.real && convert_term1.imagine == -convert_term2.imagine) {
					convert_term1.real = convert_term1.real * convert_term1.real;
					convert_term1.imagine = convert_term1.imagine * convert_term1.imagine;
					textBox3->Text = Convert::ToString(convert_term1.real) + (convert_term1.imagine >= 0 ? "+" : "") + Convert::ToString(convert_term1.imagine);
				}
				else {
					convert_term1.real = convert_term1.real * convert_term2.real - convert_term1.imagine * convert_term2.imagine;
					convert_term1.imagine = convert_term3.real * convert_term2.imagine + convert_term2.real * convert_term1.imagine;
					textBox3->Text = Convert::ToString(convert_term1.real) + (convert_term1.imagine >= 0 ? "+" : "") + Convert::ToString(convert_term1.imagine) + Convert::ToString("i");
				}
			}
			else {
				if (domainUpDown1->Text == Convert_char_to_String(v))// проверка на знак / 
				{
					double znam = convert_term2.real * convert_term2.real + convert_term2.imagine * convert_term2.imagine;
					convert_term3.real = convert_term1.real;
					convert_term1.real = convert_term1.real * convert_term2.real + convert_term1.imagine * convert_term2.imagine;
					convert_term1.imagine = (convert_term2.real * convert_term1.imagine - convert_term3.real * convert_term2.imagine);
					textBox3->Text = Convert::ToString(convert_term1.real) + Convert::ToString("/") + Convert::ToString(znam)+(convert_term1.imagine >= 0 ? "+" : "") + Convert::ToString(convert_term1.imagine) + Convert::ToString("i") + Convert::ToString("/") + Convert::ToString(znam);
				}
			}
		}
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)//Квадратный корень по формуле Муавра
{
	Convector_String_to_string(textBox4->Text->ToString(), num1);
	complex_number convert_term1, convert_term2;
	convert_term1 = convert(num1);
	r = sqrt(convert_term1.real * convert_term1.real + convert_term1.imagine * convert_term1.imagine);
	r = sqrt(r);
	phi = atan2(convert_term1.imagine, convert_term1.real);
	phi = phi / 2;
	convert_term1.real = r * cos(phi);
	convert_term1.imagine = r * sin(phi);
	textBox4->Text = Convert::ToString(Math::Round(convert_term1.real, 3)) + (convert_term1.imagine >= 0 ? "+" : "") + Convert::ToString(Math::Round(convert_term1.imagine, 3)) + Convert::ToString("i");
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)//Возведение в степень по формуле Муавра 
	{
		Convector_String_to_string(textBox5->Text->ToString(), num1);
		complex_number convert_term1 = convert(num1);
		int n = Convert::ToInt32(textBox6->Text);
		phi = atan2(convert_term1.imagine, convert_term1.real);
		r = sqrt(convert_term1.real * convert_term1.real + convert_term1.imagine * convert_term1.imagine);
		r = pow(r, n);
		phi = n * phi;
		convert_term1.real = r * cos(phi);
		convert_term1.imagine = r * sin(phi);
		textBox5->Text = Convert::ToString(Math::Round(convert_term1.real, 3)) + (convert_term1.imagine >= 0 ? "+" : "") + Convert::ToString(Math::Round(convert_term1.imagine, 3)) + Convert::ToString("i");
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)//перобразование формы
{
	complex_number convert_term1;
	Convector_String_to_string(textBox7->Text->ToString(), num1);
	convert_term1 = convert(num1);
	char* z = "Trigonometric form";
	char* b = "Exponential form";
	if (domainUpDown2->Text == Convert_char_to_String(z)) {
	r = sqrt(convert_term1.real * convert_term1.real + convert_term1.imagine * convert_term1.imagine);
	phi = atan2(convert_term1.imagine, convert_term1.real);
	textBox8->Text = Convert::ToString(Math::Round(r, 2))+ Convert::ToString("(")+ Convert::ToString("cos(")+ Convert::ToString(Math::Round(phi, 3)) + Convert::ToString(")") +(convert_term1.imagine >= 0 ? "+" : "")+ Convert::ToString("i")+ Convert::ToString("sin(") + Convert::ToString(Math::Round(phi, 3)) + Convert::ToString(")")+ Convert::ToString(")");
	}
	else {
		if (domainUpDown2->Text == Convert_char_to_String(b)) {
			r = sqrt(convert_term1.real * convert_term1.real + convert_term1.imagine * convert_term1.imagine);
			phi = atan2(convert_term1.imagine, convert_term1.real);
			textBox8->Text = Convert::ToString(Math::Round(r,3)) + Convert::ToString("e^") + Convert::ToString(Math::Round(phi, 3)) + Convert::ToString("i");
		}
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = " ";
	textBox2->Text = " ";
	textBox3->Text = " ";
	textBox4->Text = " ";
	textBox5->Text = " ";
	textBox6->Text = "0";
	textBox7->Text = " ";
	textBox8->Text = " ";
}




};
}
