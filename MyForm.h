#pragma once
#include "FunctionClasses.h"

namespace Project7 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            InitializeFunctions();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
            delete concreteFunc;
            delete sinSumFunc;
            delete cosProdFunc;
            delete squareProdFunc;
            delete container;
        }



    protected:








    private:
        System::ComponentModel::Container^ components;

       
        ::Container* container;
        ConcreteFunction* concreteFunc;
        SinSumFunction* sinSumFunc;
        CosProductFunction* cosProdFunc;
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textfuncy;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textfuncx;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ buttonOK;
    private: System::Windows::Forms::Button^ buttonClear;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::TabPage^ tabPage5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Label^ label15;





           SquareProductFunction* squareProdFunc;

           void InitializeFunctions()
           {
               concreteFunc = new ConcreteFunction();
               sinSumFunc = new SinSumFunction();
               cosProdFunc = new CosProductFunction();
               squareProdFunc = new SquareProductFunction();
               container = new ::Container();
               container->Add(concreteFunc);
               container->Add(sinSumFunc);
               container->Add(cosProdFunc);
               container->Add(squareProdFunc);
           }

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
               this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
               this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->textfuncy = (gcnew System::Windows::Forms::TextBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textfuncx = (gcnew System::Windows::Forms::TextBox());
               this->buttonOK = (gcnew System::Windows::Forms::Button());
               this->buttonClear = (gcnew System::Windows::Forms::Button());
               this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
               this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
               this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->label8 = (gcnew System::Windows::Forms::Label());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->button4 = (gcnew System::Windows::Forms::Button());
               this->label9 = (gcnew System::Windows::Forms::Label());
               this->label10 = (gcnew System::Windows::Forms::Label());
               this->textBox5 = (gcnew System::Windows::Forms::TextBox());
               this->label11 = (gcnew System::Windows::Forms::Label());
               this->textBox6 = (gcnew System::Windows::Forms::TextBox());
               this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
               this->button5 = (gcnew System::Windows::Forms::Button());
               this->button6 = (gcnew System::Windows::Forms::Button());
               this->label12 = (gcnew System::Windows::Forms::Label());
               this->label13 = (gcnew System::Windows::Forms::Label());
               this->textBox7 = (gcnew System::Windows::Forms::TextBox());
               this->label14 = (gcnew System::Windows::Forms::Label());
               this->textBox8 = (gcnew System::Windows::Forms::TextBox());
               this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
               this->button7 = (gcnew System::Windows::Forms::Button());
               this->button8 = (gcnew System::Windows::Forms::Button());
               this->label15 = (gcnew System::Windows::Forms::Label());
               this->tabControl1->SuspendLayout();
               this->tabPage1->SuspendLayout();
               this->tabPage2->SuspendLayout();
               this->tableLayoutPanel1->SuspendLayout();
               this->tabPage3->SuspendLayout();
               this->tabPage4->SuspendLayout();
               this->tabPage5->SuspendLayout();
               this->tableLayoutPanel2->SuspendLayout();
               this->tableLayoutPanel3->SuspendLayout();
               this->tableLayoutPanel4->SuspendLayout();
               this->tableLayoutPanel5->SuspendLayout();
               this->SuspendLayout();
               // 
               // tabControl1
               // 
               this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->tabControl1->Controls->Add(this->tabPage1);
               this->tabControl1->Controls->Add(this->tabPage2);
               this->tabControl1->Controls->Add(this->tabPage3);
               this->tabControl1->Controls->Add(this->tabPage4);
               this->tabControl1->Controls->Add(this->tabPage5);
               this->tabControl1->Cursor = System::Windows::Forms::Cursors::Hand;
               this->tabControl1->Location = System::Drawing::Point(-3, -3);
               this->tabControl1->Name = L"tabControl1";
               this->tabControl1->SelectedIndex = 0;
               this->tabControl1->Size = System::Drawing::Size(478, 379);
               this->tabControl1->TabIndex = 0;
               // 
               // tabPage1
               // 
               this->tabPage1->BackColor = System::Drawing::Color::LightBlue;
               this->tabPage1->Controls->Add(this->label3);
               this->tabPage1->Controls->Add(this->textfuncy);
               this->tabPage1->Controls->Add(this->label2);
               this->tabPage1->Controls->Add(this->textfuncx);
               this->tabPage1->Controls->Add(this->tableLayoutPanel1);
               this->tabPage1->Controls->Add(this->label1);
               this->tabPage1->Location = System::Drawing::Point(4, 25);
               this->tabPage1->Name = L"tabPage1";
               this->tabPage1->Padding = System::Windows::Forms::Padding(3);
               this->tabPage1->Size = System::Drawing::Size(470, 350);
               this->tabPage1->TabIndex = 0;
               this->tabPage1->Text = L"CalculateProduct";
               // 
               // tabPage2
               // 
               this->tabPage2->BackColor = System::Drawing::Color::LightBlue;
               this->tabPage2->Controls->Add(this->label4);
               this->tabPage2->Controls->Add(this->textBox1);
               this->tabPage2->Controls->Add(this->label5);
               this->tabPage2->Controls->Add(this->textBox2);
               this->tabPage2->Controls->Add(this->tableLayoutPanel2);
               this->tabPage2->Controls->Add(this->label6);
               this->tabPage2->Location = System::Drawing::Point(4, 25);
               this->tabPage2->Name = L"tabPage2";
               this->tabPage2->Padding = System::Windows::Forms::Padding(3);
               this->tabPage2->Size = System::Drawing::Size(470, 350);
               this->tabPage2->TabIndex = 1;
               this->tabPage2->Text = L"Concrete";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label3->Location = System::Drawing::Point(22, 172);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(93, 27);
               this->label3->TabIndex = 10;
               this->label3->Text = L"Answer";
               // 
               // textfuncy
               // 
               this->textfuncy->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textfuncy->BackColor = System::Drawing::SystemColors::Window;
               this->textfuncy->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textfuncy->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textfuncy->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textfuncy->Location = System::Drawing::Point(27, 130);
               this->textfuncy->Name = L"textfuncy";
               this->textfuncy->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textfuncy->Size = System::Drawing::Size(428, 28);
               this->textfuncy->TabIndex = 9;
               this->textfuncy->Text = L"0";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(22, 88);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(129, 27);
               this->label2->TabIndex = 8;
               this->label2->Text = L"Function Y";
               // 
               // textfuncx
               // 
               this->textfuncx->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textfuncx->BackColor = System::Drawing::SystemColors::Window;
               this->textfuncx->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textfuncx->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textfuncx->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textfuncx->Location = System::Drawing::Point(27, 43);
               this->textfuncx->Name = L"textfuncx";
               this->textfuncx->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textfuncx->Size = System::Drawing::Size(428, 28);
               this->textfuncx->TabIndex = 7;
               this->textfuncx->Text = L"0";
               // 
               // buttonOK
               // 
               this->buttonOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->buttonOK->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->buttonOK->Location = System::Drawing::Point(3, 3);
               this->buttonOK->Name = L"buttonOK";
               this->buttonOK->Size = System::Drawing::Size(215, 46);
               this->buttonOK->TabIndex = 0;
               this->buttonOK->Text = L"OK";
               this->buttonOK->UseVisualStyleBackColor = true;
               this->buttonOK->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);

               // 
               // buttonClear
               // 
               this->buttonClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->buttonClear->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->buttonClear->Location = System::Drawing::Point(224, 3);
               this->buttonClear->Name = L"buttonClear";
               this->buttonClear->Size = System::Drawing::Size(215, 46);
               this->buttonClear->TabIndex = 1;
               this->buttonClear->Text = L"Clear";
               this->buttonClear->UseVisualStyleBackColor = true;
               this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
               // 
               // tableLayoutPanel1
               // 
               this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->tableLayoutPanel1->ColumnCount = 2;
               this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel1->Controls->Add(this->buttonOK, 0, 0);
               this->tableLayoutPanel1->Controls->Add(this->buttonClear, 1, 0);
               this->tableLayoutPanel1->Location = System::Drawing::Point(13, 286);
               this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
               this->tableLayoutPanel1->RowCount = 1;
               this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
               this->tableLayoutPanel1->Size = System::Drawing::Size(442, 52);
               this->tableLayoutPanel1->TabIndex = 11;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(22, 13);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(128, 27);
               this->label1->TabIndex = 6;
               this->label1->Text = L"Function X";
               // 
               // tabPage3
               // 
               this->tabPage3->BackColor = System::Drawing::Color::LightBlue;
               this->tabPage3->Controls->Add(this->label7);
               this->tabPage3->Controls->Add(this->textBox3);
               this->tabPage3->Controls->Add(this->label8);
               this->tabPage3->Controls->Add(this->textBox4);
               this->tabPage3->Controls->Add(this->tableLayoutPanel3);
               this->tabPage3->Controls->Add(this->label9);
               this->tabPage3->Location = System::Drawing::Point(4, 25);
               this->tabPage3->Name = L"tabPage3";
               this->tabPage3->Padding = System::Windows::Forms::Padding(3);
               this->tabPage3->Size = System::Drawing::Size(470, 350);
               this->tabPage3->TabIndex = 2;
               this->tabPage3->Text = L"SinSum";
               // 
               // tabPage4
               // 
               this->tabPage4->BackColor = System::Drawing::Color::LightBlue;
               this->tabPage4->Controls->Add(this->label10);
               this->tabPage4->Controls->Add(this->textBox5);
               this->tabPage4->Controls->Add(this->label11);
               this->tabPage4->Controls->Add(this->textBox6);
               this->tabPage4->Controls->Add(this->tableLayoutPanel4);
               this->tabPage4->Controls->Add(this->label12);
               this->tabPage4->Location = System::Drawing::Point(4, 25);
               this->tabPage4->Name = L"tabPage4";
               this->tabPage4->Padding = System::Windows::Forms::Padding(3);
               this->tabPage4->Size = System::Drawing::Size(470, 350);
               this->tabPage4->TabIndex = 3;
               this->tabPage4->Text = L"CosProduct";
               // 
               // tabPage5
               // 
               this->tabPage5->BackColor = System::Drawing::Color::LightBlue;
               this->tabPage5->Controls->Add(this->label13);
               this->tabPage5->Controls->Add(this->textBox7);
               this->tabPage5->Controls->Add(this->label14);
               this->tabPage5->Controls->Add(this->textBox8);
               this->tabPage5->Controls->Add(this->tableLayoutPanel5);
               this->tabPage5->Controls->Add(this->label15);
               this->tabPage5->Location = System::Drawing::Point(4, 25);
               this->tabPage5->Name = L"tabPage5";
               this->tabPage5->Padding = System::Windows::Forms::Padding(3);
               this->tabPage5->Size = System::Drawing::Size(470, 350);
               this->tabPage5->TabIndex = 4;
               this->tabPage5->Text = L"SquareProduct";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label4->Location = System::Drawing::Point(23, 172);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(93, 27);
               this->label4->TabIndex = 16;
               this->label4->Text = L"Answer";
               // 
               // textBox1
               // 
               this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox1->BackColor = System::Drawing::SystemColors::Window;
               this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox1->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox1->Location = System::Drawing::Point(28, 130);
               this->textBox1->Name = L"textBox1";
               this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox1->Size = System::Drawing::Size(428, 28);
               this->textBox1->TabIndex = 15;
               this->textBox1->Text = L"0";
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label5->Location = System::Drawing::Point(23, 88);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(129, 27);
               this->label5->TabIndex = 14;
               this->label5->Text = L"Function Y";
               // 
               // textBox2
               // 
               this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox2->BackColor = System::Drawing::SystemColors::Window;
               this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox2->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox2->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox2->Location = System::Drawing::Point(28, 43);
               this->textBox2->Name = L"textBox2";
               this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox2->Size = System::Drawing::Size(428, 28);
               this->textBox2->TabIndex = 13;
               this->textBox2->Text = L"0";
               // 
               // tableLayoutPanel2
               // 
               this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->tableLayoutPanel2->ColumnCount = 2;
               this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
               this->tableLayoutPanel2->Controls->Add(this->button2, 1, 0);
               this->tableLayoutPanel2->Location = System::Drawing::Point(14, 286);
               this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
               this->tableLayoutPanel2->RowCount = 1;
               this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
               this->tableLayoutPanel2->Size = System::Drawing::Size(442, 52);
               this->tableLayoutPanel2->TabIndex = 17;
               // 
               // button1
               // 
               this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button1->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button1->Location = System::Drawing::Point(3, 3);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(215, 46);
               this->button1->TabIndex = 0;
               this->button1->Text = L"OK";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
               // 
               // button2
               // 
               this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button2->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button2->Location = System::Drawing::Point(224, 3);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(215, 46);
               this->button2->TabIndex = 1;
               this->button2->Text = L"Clear";
               this->button2->UseVisualStyleBackColor = true;
               this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click2);
               // 
               // label6
               // 
               this->label6->AutoSize = true;
               this->label6->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label6->Location = System::Drawing::Point(23, 13);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(128, 27);
               this->label6->TabIndex = 12;
               this->label6->Text = L"Function X";
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label7->Location = System::Drawing::Point(23, 172);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(93, 27);
               this->label7->TabIndex = 16;
               this->label7->Text = L"Answer";
               // 
               // textBox3
               // 
               this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox3->BackColor = System::Drawing::SystemColors::Window;
               this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox3->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox3->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox3->Location = System::Drawing::Point(28, 130);
               this->textBox3->Name = L"textBox3";
               this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox3->Size = System::Drawing::Size(428, 28);
               this->textBox3->TabIndex = 15;
               this->textBox3->Text = L"0";
               // 
               // label8
               // 
               this->label8->AutoSize = true;
               this->label8->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label8->Location = System::Drawing::Point(23, 88);
               this->label8->Name = L"label8";
               this->label8->Size = System::Drawing::Size(129, 27);
               this->label8->TabIndex = 14;
               this->label8->Text = L"Function Y";
               // 
               // textBox4
               // 
               this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox4->BackColor = System::Drawing::SystemColors::Window;
               this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox4->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox4->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox4->Location = System::Drawing::Point(28, 43);
               this->textBox4->Name = L"textBox4";
               this->textBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox4->Size = System::Drawing::Size(428, 28);
               this->textBox4->TabIndex = 13;
               this->textBox4->Text = L"0";
               // 
               // tableLayoutPanel3
               // 
               this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->tableLayoutPanel3->ColumnCount = 2;
               this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel3->Controls->Add(this->button3, 0, 0);
               this->tableLayoutPanel3->Controls->Add(this->button4, 1, 0);
               this->tableLayoutPanel3->Location = System::Drawing::Point(14, 286);
               this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
               this->tableLayoutPanel3->RowCount = 1;
               this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
               this->tableLayoutPanel3->Size = System::Drawing::Size(442, 52);
               this->tableLayoutPanel3->TabIndex = 17;
               // 
               // button3
               // 
               this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button3->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button3->Location = System::Drawing::Point(3, 3);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(215, 46);
               this->button3->TabIndex = 0;
               this->button3->Text = L"OK";
               this->button3->UseVisualStyleBackColor = true;
               this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
               // 
               // button4
               // 
               this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button4->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button4->Location = System::Drawing::Point(224, 3);
               this->button4->Name = L"button4";
               this->button4->Size = System::Drawing::Size(215, 46);
               this->button4->TabIndex = 1;
               this->button4->Text = L"Clear";
               this->button4->UseVisualStyleBackColor = true;
               this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click3);
               // 
               // label9
               // 
               this->label9->AutoSize = true;
               this->label9->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label9->Location = System::Drawing::Point(23, 13);
               this->label9->Name = L"label9";
               this->label9->Size = System::Drawing::Size(128, 27);
               this->label9->TabIndex = 12;
               this->label9->Text = L"Function X";
               // 
               // label10
               // 
               this->label10->AutoSize = true;
               this->label10->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label10->Location = System::Drawing::Point(23, 172);
               this->label10->Name = L"label10";
               this->label10->Size = System::Drawing::Size(93, 27);
               this->label10->TabIndex = 16;
               this->label10->Text = L"Answer";
               // 
               // textBox5
               // 
               this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox5->BackColor = System::Drawing::SystemColors::Window;
               this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox5->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox5->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox5->Location = System::Drawing::Point(28, 130);
               this->textBox5->Name = L"textBox5";
               this->textBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox5->Size = System::Drawing::Size(428, 28);
               this->textBox5->TabIndex = 15;
               this->textBox5->Text = L"0";
               // 
               // label11
               // 
               this->label11->AutoSize = true;
               this->label11->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label11->Location = System::Drawing::Point(23, 88);
               this->label11->Name = L"label11";
               this->label11->Size = System::Drawing::Size(129, 27);
               this->label11->TabIndex = 14;
               this->label11->Text = L"Function Y";
               // 
               // textBox6
               // 
               this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox6->BackColor = System::Drawing::SystemColors::Window;
               this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox6->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox6->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox6->Location = System::Drawing::Point(28, 43);
               this->textBox6->Name = L"textBox6";
               this->textBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox6->Size = System::Drawing::Size(428, 28);
               this->textBox6->TabIndex = 13;
               this->textBox6->Text = L"0";
               // 
               // tableLayoutPanel4
               // 
               this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->tableLayoutPanel4->ColumnCount = 2;
               this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel4->Controls->Add(this->button5, 0, 0);
               this->tableLayoutPanel4->Controls->Add(this->button6, 1, 0);
               this->tableLayoutPanel4->Location = System::Drawing::Point(14, 286);
               this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
               this->tableLayoutPanel4->RowCount = 1;
               this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
               this->tableLayoutPanel4->Size = System::Drawing::Size(442, 52);
               this->tableLayoutPanel4->TabIndex = 17;
               // 
               // button5
               // 
               this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button5->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button5->Location = System::Drawing::Point(3, 3);
               this->button5->Name = L"button5";
               this->button5->Size = System::Drawing::Size(215, 46);
               this->button5->TabIndex = 0;
               this->button5->Text = L"OK";
               this->button5->UseVisualStyleBackColor = true;
               this->button5->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
               // 
               // button6
               // 
               this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button6->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button6->Location = System::Drawing::Point(224, 3);
               this->button6->Name = L"button6";
               this->button6->Size = System::Drawing::Size(215, 46);
               this->button6->TabIndex = 1;
               this->button6->Text = L"Clear";
               this->button6->UseVisualStyleBackColor = true;
               this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click4);
               // 
               // label12
               // 
               this->label12->AutoSize = true;
               this->label12->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label12->Location = System::Drawing::Point(23, 13);
               this->label12->Name = L"label12";
               this->label12->Size = System::Drawing::Size(128, 27);
               this->label12->TabIndex = 12;
               this->label12->Text = L"Function X";
               // 
               // label13
               // 
               this->label13->AutoSize = true;
               this->label13->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label13->Location = System::Drawing::Point(23, 172);
               this->label13->Name = L"label13";
               this->label13->Size = System::Drawing::Size(93, 27);
               this->label13->TabIndex = 16;
               this->label13->Text = L"Answer";
               // 
               // textBox7
               // 
               this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox7->BackColor = System::Drawing::SystemColors::Window;
               this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox7->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox7->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox7->Location = System::Drawing::Point(28, 130);
               this->textBox7->Name = L"textBox7";
               this->textBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox7->Size = System::Drawing::Size(428, 28);
               this->textBox7->TabIndex = 15;
               this->textBox7->Text = L"0";
               // 
               // label14
               // 
               this->label14->AutoSize = true;
               this->label14->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label14->Location = System::Drawing::Point(23, 88);
               this->label14->Name = L"label14";
               this->label14->Size = System::Drawing::Size(129, 27);
               this->label14->TabIndex = 14;
               this->label14->Text = L"Function Y";
               // 
               // textBox8
               // 
               this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBox8->BackColor = System::Drawing::SystemColors::Window;
               this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBox8->Font = (gcnew System::Drawing::Font(L"High Tower Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox8->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox8->Location = System::Drawing::Point(28, 43);
               this->textBox8->Name = L"textBox8";
               this->textBox8->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->textBox8->Size = System::Drawing::Size(428, 28);
               this->textBox8->TabIndex = 13;
               this->textBox8->Text = L"0";
               // 
               // tableLayoutPanel5
               // 
               this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->tableLayoutPanel5->ColumnCount = 2;
               this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                   50)));
               this->tableLayoutPanel5->Controls->Add(this->button7, 0, 0);
               this->tableLayoutPanel5->Controls->Add(this->button8, 1, 0);
               this->tableLayoutPanel5->Location = System::Drawing::Point(14, 286);
               this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
               this->tableLayoutPanel5->RowCount = 1;
               this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
               this->tableLayoutPanel5->Size = System::Drawing::Size(442, 52);
               this->tableLayoutPanel5->TabIndex = 17;
               // 
               // button7
               // 
               this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button7->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button7->Location = System::Drawing::Point(3, 3);
               this->button7->Name = L"button7";
               this->button7->Size = System::Drawing::Size(215, 46);
               this->button7->TabIndex = 0;
               this->button7->Text = L"OK";
               this->button7->UseVisualStyleBackColor = true;
               this->button7->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
               // 
               // button8
               // 
               this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button8->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button8->Location = System::Drawing::Point(224, 3);
               this->button8->Name = L"button8";
               this->button8->Size = System::Drawing::Size(215, 46);
               this->button8->TabIndex = 1;
               this->button8->Text = L"Clear";
               this->button8->UseVisualStyleBackColor = true;
               this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click5);
               // 
               // label15
               // 
               this->label15->AutoSize = true;
               this->label15->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label15->Location = System::Drawing::Point(23, 13);
               this->label15->Name = L"label15";
               this->label15->Size = System::Drawing::Size(128, 27);
               this->label15->TabIndex = 12;
               this->label15->Text = L"Function X";
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
               this->ClientSize = System::Drawing::Size(468, 366);
               this->Controls->Add(this->tabControl1);
               this->MinimumSize = System::Drawing::Size(373, 413);
               this->Name = L"MyForm";
               this->Text = L"Two functions";
               this->tabControl1->ResumeLayout(false);
               this->tabPage1->ResumeLayout(false);
               this->tabPage1->PerformLayout();
               this->tabPage2->ResumeLayout(false);
               this->tabPage2->PerformLayout();
               this->tableLayoutPanel1->ResumeLayout(false);
               this->tabPage3->ResumeLayout(false);
               this->tabPage3->PerformLayout();
               this->tabPage4->ResumeLayout(false);
               this->tabPage4->PerformLayout();
               this->tabPage5->ResumeLayout(false);
               this->tabPage5->PerformLayout();
               this->tableLayoutPanel2->ResumeLayout(false);
               this->tableLayoutPanel3->ResumeLayout(false);
               this->tableLayoutPanel4->ResumeLayout(false);
               this->tableLayoutPanel5->ResumeLayout(false);
               this->ResumeLayout(false);

           }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        double x = System::Convert::ToDouble(textfuncx->Text);
        double y = System::Convert::ToDouble(textfuncy->Text);
        double result = container->CalculateProduct(x, y);
        label3->Text = "Answer: " + result.ToString();
    }
    private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
        textfuncx->Text = "0";
        textfuncy->Text = "0";
        label3->Text = "Answer";
    }
     private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
         double x = System::Convert::ToDouble(textBox2->Text);
         double y = System::Convert::ToDouble(textBox1->Text);
         double result = concreteFunc->CalculateFunc(x, y);
         label4->Text = "Answer: " + result.ToString();
     }
     private: System::Void buttonClear_Click2(System::Object^ sender, System::EventArgs^ e) {
         textBox2->Text = "0";
         textBox1->Text = "0";
         label4->Text = "Answer";
     }
     private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
         double x = System::Convert::ToDouble(textBox4->Text);
         double y = System::Convert::ToDouble(textBox3->Text);
         double result = sinSumFunc->CalculateFunc(x, y);
         label7->Text = "Answer: " + result.ToString();
     }
     private: System::Void buttonClear_Click3(System::Object^ sender, System::EventArgs^ e) {
         textBox4->Text = "0";
         textBox3->Text = "0";
         label7->Text = "Answer";
     }
     private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
         double x = System::Convert::ToDouble(textBox6->Text);
         double y = System::Convert::ToDouble(textBox5->Text);
         double result = cosProdFunc->CalculateFunc(x, y);
         label10->Text = "Answer: " + result.ToString();
     }
     private: System::Void buttonClear_Click4(System::Object^ sender, System::EventArgs^ e) {
         textBox6->Text = "0";
         textBox5->Text = "0";
         label10->Text = "Answer";
     }
     private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
         double x = System::Convert::ToDouble(textBox7->Text);
         double y = System::Convert::ToDouble(textBox8->Text);
         double result = squareProdFunc->CalculateFunc(x, y);
         label13->Text = "Answer: " + result.ToString();
     }
     private: System::Void buttonClear_Click5(System::Object^ sender, System::EventArgs^ e) {
         textBox7->Text = "0";
         textBox8->Text = "0";
         label13->Text = "Answer";
     }
    };

}
