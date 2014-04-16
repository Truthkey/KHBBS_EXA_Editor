#pragma once


namespace EXAEditor {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	protected: 

	private:

		System::ComponentModel::Container ^components;
		char effects;
		char anims;
		char models;
		char sounds;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;


	private: System::Windows::Forms::Button^  button2;

			 char text;
			 array<String^> ^MDL;
			 array<String^> ^ANM;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
			 String ^F;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(105, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Model list";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(231, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Animation list";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(108, 26);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(120, 238);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(234, 26);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(120, 238);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Models";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Animations";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Effects";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(357, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Effect list";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(360, 26);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(164, 238);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 185);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Voices";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 198);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 156);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Text Strings";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 172);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(11, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 20);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(8, 223);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(86, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Event Language";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Agency FB", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(7, 236);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 24);
			this->label15->TabIndex = 4;
			this->label15->Text = L"None";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 276);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"EXA Editor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog ^d1 = gcnew OpenFileDialog();
				 unsigned int lang = 0;

				 if(d1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {

					 button2->Enabled = true;
					 F = d1->FileName;
					 FileStream ^file = gcnew FileStream(F,FileMode::Open);
					 BinaryReader ^r = gcnew BinaryReader(file);

					 for(int v=0;v<(file->Length)-9;++v)
					 {
						 r->BaseStream->Seek(v,SeekOrigin::Begin);
						 lang = r->ReadUInt32();

						 if(lang == 0x6E652F65)
						 {
							 label15->Text = "English";
						 }
						 else if(lang == 0x706A2F65)
						 {
							 label15->Text = "Japanese";
						 }
					 }

					 /*Read EXA info.*/
					 r->BaseStream->Seek(0xC,SeekOrigin::Begin);
					 effects = r->ReadByte();
					 models = 0;
					 anims = 0;
					 text = 0;
					 sounds = 0;

					 //Clear Text Boxes.
					 richTextBox1->Text = "";
					 richTextBox2->Text = "";
					 richTextBox3->Text = "";

					 //If the EXA doesn't include effects...
					 if(effects == 0)
					 {
						 richTextBox3->Text = "None";
						 richTextBox3->Enabled = false;
						 label8->Text = effects.ToString();
						 r->BaseStream->Seek(0x1A,SeekOrigin::Begin);
						 models = r->ReadByte();
						 if(models == 0)
						 {
							 richTextBox1->Text = "This EXA cannot be edited.";
							 richTextBox2->Text = "This EXA cannot be edited.";
							 richTextBox3->Text = "This EXA cannot be edited.";
						 }
						 else
						 {
							 anims = r->ReadByte();
							 r->BaseStream->Seek(0x1D,SeekOrigin::Begin);
							 text = r->ReadByte();
							 r->BaseStream->Seek(0x1F,SeekOrigin::Begin);
							 sounds = r->ReadByte();
							 label5->Text = models.ToString();
							 label6->Text = anims.ToString();
							 label11->Text = sounds.ToString();
							 label13->Text = text.ToString();

							 //Get Models.
							 for(short a=0;a<models;)
							 {
								 r->BaseStream->Seek(0x4C+(60*a),SeekOrigin::Begin);
								 for(char b=1;b<=16;++b)
								 {
									 richTextBox1->Text += r->ReadChar();
								 }
								 ++a;
								 if(a<models)
								 {
									 richTextBox1->Text += "\n";
								 }
							 }

							 if(anims != 0)
							 {
								 //Get Animations.
								 for(short c=0;c<anims;)
								 {
									 r->BaseStream->Seek(0x4C+4+(60*models)+(80*c),SeekOrigin::Begin);
									 for(char d=1;d<=16;++d)
									 {
										 richTextBox2->Text += r->ReadChar();
									 }
									 ++c;
									 if(c<anims)
									 {
										 richTextBox2->Text += "\n";
									 }
								 }
							 }
						 }

					 }
					 //If it does include...
					 else
					 {
						 richTextBox3->Enabled = true;
						 label8->Text = effects.ToString();
						 r->BaseStream->Seek(0x1A+(0x40*effects),SeekOrigin::Begin);
						 models = r->ReadByte();
						 if(models == 0)
						 {
							 richTextBox1->Text = "This EXA cannot be edited.";
							 richTextBox2->Text = "This EXA cannot be edited.";
							 richTextBox3->Text = "This EXA cannot be edited.";
						 }
						 else
						 {
							 anims = r->ReadByte();
							 r->BaseStream->Seek(0x1D+(0x40*effects),SeekOrigin::Begin);
							 text = r->ReadByte();
							 r->BaseStream->Seek(0x1F+(0x40*effects),SeekOrigin::Begin);
							 sounds = r->ReadByte();
							 label5->Text = models.ToString();
							 label6->Text = anims.ToString();
							 label11->Text = sounds.ToString();
							 label13->Text = text.ToString();

							 //Get Effects.
							 for(short g=0;g<effects;)
							 {
								 r->BaseStream->Seek(0x10+(0x40*g),SeekOrigin::Begin);
								 for(char m=1;m<=0x40;++m)
								 {
									 richTextBox3->Text += r->ReadChar();
								 }
								 ++g;
								 if(g<effects)
								 {
									 richTextBox3->Text += "\n";
								 }
							 }

							 //Get Models.
							 for(short a=0;a<models;)
							 {
								 r->BaseStream->Seek(0x4C+(60*a)+(0x40*effects),SeekOrigin::Begin);
								 for(char b=1;b<=16;++b)
								 {
									 richTextBox1->Text += r->ReadChar();
								 }
								 ++a;
								 if(a<models)
								 {
									 richTextBox1->Text += "\n";
								 }
							 }

							 if(anims !=0)
							 {
								 //Get Animations.
								 for(short c=0;c<anims;)
								 {
									 r->BaseStream->Seek(0x4C+4+(60*models)+(80*c)+(0x40*effects),SeekOrigin::Begin);
									 for(char d=1;d<=16;++d)
									 {
										 richTextBox2->Text += r->ReadChar();
									 }
									 ++c;
									 if(c<anims)
									 {
										 richTextBox2->Text += "\n";
									 }
								 }
							 }
						 }
					 }
					 MDL = richTextBox1->Lines;
					 ANM = richTextBox2->Lines;

					 file->Close();
					 r->Close();
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 FileStream ^file = gcnew FileStream(F,FileMode::Open);
			 BinaryReader ^r = gcnew BinaryReader(file,System::Text::Encoding::ASCII);
			 BinaryWriter ^w = gcnew BinaryWriter(file,System::Text::Encoding::ASCII);
			 array<String^> ^MDL_N = richTextBox1->Lines;
			 array<String^> ^ANM_N = richTextBox2->Lines;
			 String ^search;
			 String ^oldsearch;


			 int filesize = file->Length;
			 int nop = 0;

			 String ^type = "";
			 String ^chr = "";
			 String ^var = "";
			 String ^checker = "";
			 String ^MPath = "";
			 String ^APath = "";

			 if(models == 0)
			 {
				 System::Windows::Forms::MessageBox::Show("This file cannot be edited!");
			 }
			 else
			 {
				 if(effects == 0)
				 {
					 for(short a=0;a<models;++a)
					 {
						 //Reset variables.
						 chr = "";
						 type = "";
						 var = "";

						 //Write model name.
						 r->BaseStream->Seek(0x4C+(60*a),SeekOrigin::Begin);
						 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
						 r->BaseStream->Seek(0x4C+(60*a),SeekOrigin::Begin);
						 w->Write(MDL_N[a]->ToCharArray());

						 //Build full path.
						 r->BaseStream->Seek(0x4C+(60*a),SeekOrigin::Begin);
						 checker = r->ReadChar().ToString();

						 if(checker->Contains("p") == true){
							 type = "pc";}
						 else if(checker->Contains("m") == true){
							 type = "enemy";}
						 else if(checker->Contains("n") == true){
							 type = "npc";}
						 else if(checker->Contains("b") == true){
							 type = "boss";}
						 else if(checker->Contains("w") == true){
							 type = "weapon";}
						 else if(checker->Contains("f") == true){
							 type = "f_obj";}
						 else if(checker->Contains("g") == true){
							 type = "gimmick";}
						 else{
							 type = "realtime";}

						 r->BaseStream->Seek(0x4C+(60*a),SeekOrigin::Begin);
						 for(char s=0;s<5;++s)
						 {
							 chr += r->ReadChar();
						 }

						 r->BaseStream->Seek(0x4C+(60*a)+5,SeekOrigin::Begin);

						 for(char m=0;m<2;++m)
						 {
							 var += r->ReadChar();
						 }

						 MPath = "chara/" + type + "/" + chr + "/" + var + "/";

						 //Write model path.
						 r->BaseStream->Seek(0x4C+(60*a)+16,SeekOrigin::Begin);
						 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
						 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
						 r->BaseStream->Seek(0x4C+(60*a)+16,SeekOrigin::Begin);
						 w->Write(MPath->ToCharArray());

						 oldsearch = MDL[a];

						 //Loop through the whole file and replace the model tags.
						 for(int scan=0;scan<(filesize-0x80);++scan)
						 {
							 search = "";
							 r->BaseStream->Seek(scan,SeekOrigin::Begin);
							 for(int c=0;c<7;++c)
							 {
								 search += r->ReadChar();
							 }
							 
							 if(String::Compare(oldsearch,search,false) == 0)
							 {
								 if(r->ReadByte() == 0)
								 {
									 r->BaseStream->Seek(scan,SeekOrigin::Begin);
									 w->Write(MDL_N[a]->ToCharArray());
								 }
							 }
						 }


						 /*                  ANIMATIONS                  */
						 for(int anm=0;anm<anims;++anm)
						 {
							 //Reset variables.
							 chr = "";
							 type = "";
							 var = "";

							 //Write animation name.
							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 w->Write(ANM_N[anm]->ToCharArray());
							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80)+48,SeekOrigin::Begin);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80)+48,SeekOrigin::Begin);
							 w->Write(ANM_N[anm]->ToCharArray());

							 //Build full path.
							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 checker = r->ReadChar().ToString();

							 if(checker->Contains("p") == true){
								 type = "pc";}
							 else if(checker->Contains("n") == true){
								 type = "npc";}
							 else if(checker->Contains("m") == true){
								 type = "enemy";}
							 else if(checker->Contains("b") == true){
								 type = "boss";}
							 else if(checker->Contains("w") == true){
								 type = "weapon";}
							 else if(checker->Contains("f") == true){
								 type = "f_obj";}
							 else if(checker->Contains("g") == true){
								 type = "gimmick";}
							 else{
								 type = "realtime";}

							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 for(char s=0;s<5;++s)
							 {
								 chr += r->ReadChar();
							 }

							 r->BaseStream->Seek(0x4C+7+(60*models)+(anm*80),SeekOrigin::Begin);

							 for(char m=0;m<2;++m)
							 {
								 var += r->ReadChar();
							 }

							 APath = "chara/" + type + "/" + chr + "/" + "event_" + var + "/";

							 //Write animation path.
							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80)+16,SeekOrigin::Begin);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 r->BaseStream->Seek(0x4C+4+(60*models)+(anm*80)+16,SeekOrigin::Begin);
							 w->Write(APath->ToCharArray());

							 oldsearch = ANM[anm];

							 //Loop through the whole file and replace the animation tags.
							 for(int s=0;s<(filesize-0x80);++s)
							 {
								 search = "";
								 r->BaseStream->Seek(s,SeekOrigin::Begin);
								 for(int c=0;c<11;++c)
								 {
									 search += r->ReadChar();
								 }
							 
								 if(String::Compare(oldsearch,search,false) == 0)
								 {
									 if(r->ReadByte() == 0)
									 {
										 r->BaseStream->Seek(s,SeekOrigin::Begin);
										 w->Write(ANM_N[anm]->ToCharArray());
									 }
								 }
							 }
						 }
					 }
				 }

				 //If there are no effects.
				 else if(effects != 0)
				 {
					 for(short a=0;a<models;++a)
					 {
						 //Reset variables.
						 chr = "";
						 type = "";
						 var = "";

						 //Write model name.
						 r->BaseStream->Seek((0x40*effects)+0x4C+(60*a),SeekOrigin::Begin);
						 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
						 r->BaseStream->Seek((0x40*effects)+0x4C+(60*a),SeekOrigin::Begin);
						 w->Write(MDL_N[a]->ToCharArray());

						 //Build full path.
						 r->BaseStream->Seek((0x40*effects)+0x4C+(60*a),SeekOrigin::Begin);
						 checker = r->ReadChar().ToString();

						 if(checker->Contains("p") == true){
							 type = "pc";}
						 else if(checker->Contains("n") == true){
							 type = "npc";}
						 else if(checker->Contains("b") == true){
							 type = "boss";}
						 else if(checker->Contains("w") == true){
							 type = "weapon";}
						 else if(checker->Contains("f") == true){
							 type = "f_obj";}
						 else if(checker->Contains("g") == true){
							 type = "gimmick";}

						 r->BaseStream->Seek((0x40*effects)+0x4C+(60*a),SeekOrigin::Begin);
						 for(char s=0;s<5;++s)
						 {
							 chr += r->ReadChar();
						 }

						 r->BaseStream->Seek((0x40*effects)+0x4C+(60*a)+5,SeekOrigin::Begin);

						 for(char m=0;m<2;++m)
						 {
							 var += r->ReadChar();
						 }

						 MPath = "chara/" + type + "/" + chr + "/" + var + "/";

						 //Write model path.
						 r->BaseStream->Seek((0x40*effects)+0x4C+(60*a)+16,SeekOrigin::Begin);
						 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
						 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
						 r->BaseStream->Seek((0x40*effects)+0x4C+(60*a)+16,SeekOrigin::Begin);
						 w->Write(MPath->ToCharArray());

						 oldsearch = MDL[a];

						 //Loop through the whole file and replace the model tags.
						 for(int scan=0;scan<(filesize-0x80);++scan)
						 {
							 search = "";
							 r->BaseStream->Seek(scan,SeekOrigin::Begin);
							 for(int c=0;c<7;++c)
							 {
								 search += r->ReadChar();
							 }
							 
							 if(String::Compare(oldsearch,search,false) == 0)
							 {
								 if(r->ReadByte() == 0)
								 {
									 r->BaseStream->Seek(scan,SeekOrigin::Begin);
									 w->Write(MDL_N[a]->ToCharArray());
								 }
							 }
						 }
					 }

					 /*                  ANIMATIONS                  */
						 for(int anm=0;anm<anims;++anm)
						 {
							 //Reset variables.
							 chr = "";
							 type = "";
							 var = "";

							 //Write animation name.
							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 w->Write(ANM_N[anm]->ToCharArray());
							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80)+48,SeekOrigin::Begin);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80)+48,SeekOrigin::Begin);
							 w->Write(ANM_N[anm]->ToCharArray());

							 //Build full path.
							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 checker = r->ReadChar().ToString();

							 if(checker->Contains("p") == true){
								 type = "pc";}
							 else if(checker->Contains("n") == true){
								 type = "npc";}
							 else if(checker->Contains("m") == true){
								 type = "enemy";}
							 else if(checker->Contains("b") == true){
								 type = "boss";}
							 else if(checker->Contains("w") == true){
								 type = "weapon";}
							 else if(checker->Contains("f") == true){
								 type = "f_obj";}
							 else if(checker->Contains("g") == true){
								 type = "gimmick";}
							 else{
								 type = "realtime";}

							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80),SeekOrigin::Begin);
							 for(char s=0;s<5;++s)
							 {
								 chr += r->ReadChar();
							 }

							 r->BaseStream->Seek((0x40*effects)+0x4C+7+(60*models)+(anm*80),SeekOrigin::Begin);

							 for(char m=0;m<2;++m)
							 {
								 var += r->ReadChar();
							 }

							 APath = "chara/" + type + "/" + chr + "/" + "event_" + var + "/";

							 //Write animation path.
							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80)+16,SeekOrigin::Begin);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 w->Write(nop);w->Write(nop);w->Write(nop);w->Write(nop);
							 r->BaseStream->Seek((0x40*effects)+0x4C+4+(60*models)+(anm*80)+16,SeekOrigin::Begin);
							 w->Write(APath->ToCharArray());

							 oldsearch = ANM[anm];

							 //Loop through the whole file and replace the animation tags.
							 for(int s=0;s<(filesize-0x80);++s)
							 {
								 search = "";
								 r->BaseStream->Seek(s,SeekOrigin::Begin);
								 for(int c=0;c<11;++c)
								 {
									 search += r->ReadChar();
								 }
							 
								 if(String::Compare(oldsearch,search,false) == 0)
								 {
									 if(r->ReadByte() == 0)
									 {
										 r->BaseStream->Seek(s,SeekOrigin::Begin);
										 w->Write(ANM_N[anm]->ToCharArray());
									 }
								 }
							 }
						 }
				 }

			 }
			 file->Close();
			 r->Close();
			 w->Close();
			 button2->Enabled = false;
		 }
};
}

