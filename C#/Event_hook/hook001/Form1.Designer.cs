namespace hook001
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.window_Find_button = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.send_Event_Button = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.set_manual = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // window_Find_button
            // 
            this.window_Find_button.Location = new System.Drawing.Point(12, 24);
            this.window_Find_button.Name = "window_Find_button";
            this.window_Find_button.Size = new System.Drawing.Size(90, 23);
            this.window_Find_button.TabIndex = 0;
            this.window_Find_button.Text = "Find Window";
            this.window_Find_button.UseVisualStyleBackColor = true;
            this.window_Find_button.Click += new System.EventHandler(this.window_Find_button_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(38, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "label1";
            // 
            // send_Event_Button
            // 
            this.send_Event_Button.Location = new System.Drawing.Point(109, 24);
            this.send_Event_Button.Name = "send_Event_Button";
            this.send_Event_Button.Size = new System.Drawing.Size(87, 23);
            this.send_Event_Button.TabIndex = 2;
            this.send_Event_Button.Text = "Send Event";
            this.send_Event_Button.UseVisualStyleBackColor = true;
            this.send_Event_Button.Click += new System.EventHandler(this.send_Event_Button_clicked);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(15, 54);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(654, 384);
            this.textBox1.TabIndex = 3;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(202, 26);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(177, 21);
            this.textBox2.TabIndex = 4;
            // 
            // set_manual
            // 
            this.set_manual.Location = new System.Drawing.Point(385, 26);
            this.set_manual.Name = "set_manual";
            this.set_manual.Size = new System.Drawing.Size(78, 21);
            this.set_manual.TabIndex = 5;
            this.set_manual.Text = "Set";
            this.set_manual.UseVisualStyleBackColor = true;
            this.set_manual.Click += new System.EventHandler(this.set_manual_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.set_manual);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.send_Event_Button);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.window_Find_button);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button window_Find_button;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button send_Event_Button;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Button set_manual;
    }
}

