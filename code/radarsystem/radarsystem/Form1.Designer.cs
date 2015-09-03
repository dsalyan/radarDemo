namespace radarsystem
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tbp_SceneSet = new System.Windows.Forms.TabPage();
            this.tbp_SetModule = new System.Windows.Forms.TabPage();
            this.tbp_CharacterAnalysis = new System.Windows.Forms.TabPage();
            this.cob_setModules = new System.Windows.Forms.ComboBox();
            this.clb_setMod = new System.Windows.Forms.CheckedListBox();
            this.label_addNoiseType = new System.Windows.Forms.Label();
            this.btn_Finish = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            this.tabControl1.SuspendLayout();
            this.tbp_SetModule.SuspendLayout();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Location = new System.Drawing.Point(276, 23);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(27, 8);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox2.Image")));
            this.pictureBox2.Location = new System.Drawing.Point(-2, 0);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(556, 56);
            this.pictureBox2.TabIndex = 1;
            this.pictureBox2.TabStop = false;
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tbp_SceneSet);
            this.tabControl1.Controls.Add(this.tbp_SetModule);
            this.tabControl1.Controls.Add(this.tbp_CharacterAnalysis);
            this.tabControl1.Location = new System.Drawing.Point(-2, 62);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(556, 284);
            this.tabControl1.TabIndex = 3;
            // 
            // tbp_SceneSet
            // 
            this.tbp_SceneSet.Location = new System.Drawing.Point(4, 22);
            this.tbp_SceneSet.Name = "tbp_SceneSet";
            this.tbp_SceneSet.Padding = new System.Windows.Forms.Padding(3);
            this.tbp_SceneSet.Size = new System.Drawing.Size(548, 258);
            this.tbp_SceneSet.TabIndex = 0;
            this.tbp_SceneSet.Text = "岸基场景设置";
            this.tbp_SceneSet.UseVisualStyleBackColor = true;
            // 
            // tbp_SetModule
            // 
            this.tbp_SetModule.Controls.Add(this.btn_Finish);
            this.tbp_SetModule.Controls.Add(this.label_addNoiseType);
            this.tbp_SetModule.Controls.Add(this.clb_setMod);
            this.tbp_SetModule.Controls.Add(this.cob_setModules);
            this.tbp_SetModule.Location = new System.Drawing.Point(4, 22);
            this.tbp_SetModule.Name = "tbp_SetModule";
            this.tbp_SetModule.Padding = new System.Windows.Forms.Padding(3);
            this.tbp_SetModule.Size = new System.Drawing.Size(548, 258);
            this.tbp_SetModule.TabIndex = 1;
            this.tbp_SetModule.Text = "探测建模";
            this.tbp_SetModule.UseVisualStyleBackColor = true;
            // 
            // tbp_CharacterAnalysis
            // 
            this.tbp_CharacterAnalysis.Location = new System.Drawing.Point(4, 22);
            this.tbp_CharacterAnalysis.Name = "tbp_CharacterAnalysis";
            this.tbp_CharacterAnalysis.Size = new System.Drawing.Size(548, 258);
            this.tbp_CharacterAnalysis.TabIndex = 2;
            this.tbp_CharacterAnalysis.Text = "特性分析";
            this.tbp_CharacterAnalysis.UseVisualStyleBackColor = true;
            // 
            // cob_setModules
            // 
            this.cob_setModules.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cob_setModules.Font = new System.Drawing.Font("宋体", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.cob_setModules.FormattingEnabled = true;
            this.cob_setModules.Items.AddRange(new object[] {
            "多普勒雷达",
            "多基地雷达",
            "超视距雷达",
            "声呐雷达"});
            this.cob_setModules.Location = new System.Drawing.Point(398, 6);
            this.cob_setModules.Name = "cob_setModules";
            this.cob_setModules.Size = new System.Drawing.Size(121, 22);
            this.cob_setModules.TabIndex = 0;
            this.cob_setModules.SelectedIndexChanged += new System.EventHandler(this.cob_setModules_SelectedIndexChanged);
            // 
            // clb_setMod
            // 
            this.clb_setMod.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.clb_setMod.CheckOnClick = true;
            this.clb_setMod.Font = new System.Drawing.Font("宋体", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.clb_setMod.FormattingEnabled = true;
            this.clb_setMod.HorizontalScrollbar = true;
            this.clb_setMod.Items.AddRange(new object[] {
            "高斯白噪声",
            "泊松噪声",
            "平均噪声"});
            this.clb_setMod.Location = new System.Drawing.Point(412, 72);
            this.clb_setMod.Name = "clb_setMod";
            this.clb_setMod.Size = new System.Drawing.Size(120, 54);
            this.clb_setMod.TabIndex = 1;
            this.clb_setMod.SelectedIndexChanged += new System.EventHandler(this.clb_setMod_SelectedIndexChanged);
            // 
            // label_addNoiseType
            // 
            this.label_addNoiseType.AutoSize = true;
            this.label_addNoiseType.Font = new System.Drawing.Font("宋体", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label_addNoiseType.Location = new System.Drawing.Point(395, 44);
            this.label_addNoiseType.Name = "label_addNoiseType";
            this.label_addNoiseType.Size = new System.Drawing.Size(98, 14);
            this.label_addNoiseType.TabIndex = 2;
            this.label_addNoiseType.Text = "添加噪声种类:";
            // 
            // btn_Finish
            // 
            this.btn_Finish.Location = new System.Drawing.Point(398, 142);
            this.btn_Finish.Name = "btn_Finish";
            this.btn_Finish.Size = new System.Drawing.Size(75, 23);
            this.btn_Finish.TabIndex = 3;
            this.btn_Finish.Text = "选择完毕";
            this.btn_Finish.UseVisualStyleBackColor = true;
            this.btn_Finish.Click += new System.EventHandler(this.btn_Finish_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(556, 346);
            this.Controls.Add(this.tabControl1);
            this.Controls.Add(this.pictureBox2);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            this.tabControl1.ResumeLayout(false);
            this.tbp_SetModule.ResumeLayout(false);
            this.tbp_SetModule.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tbp_SceneSet;
        private System.Windows.Forms.TabPage tbp_SetModule;
        private System.Windows.Forms.TabPage tbp_CharacterAnalysis;
        private System.Windows.Forms.CheckedListBox clb_setMod;
        private System.Windows.Forms.ComboBox cob_setModules;
        private System.Windows.Forms.Label label_addNoiseType;
        private System.Windows.Forms.Button btn_Finish;
        private string strCollected;
    }
}

