using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace radarsystem
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void cob_setModules_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch(cob_setModules.SelectedIndex)
            {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    MessageBox.Show("请选择雷达类型！");
                    break;
            }
        }

        private void clb_setMod_SelectedIndexChanged(object sender, EventArgs e)
        {
            int i;
            strCollected = string.Empty;
            for (i = 0; i < clb_setMod.Items.Count; i++)
            {
                if (clb_setMod.GetItemChecked(i))
                {
                    if (strCollected == string.Empty)
                    {
                        strCollected = clb_setMod.GetItemText(clb_setMod.Items[i]);
                    }
                    else
                    {
                        strCollected = strCollected + "，" + clb_setMod.GetItemText(clb_setMod.Items[i]);
                    }
                }
            }
            //MessageBox.Show("您选择添加了" + strCollected, "提示");
            //if (clb_setMod.GetItemChecked(0))
            //{
            //    MessageBox.Show("添加了泊松噪声！");
            //}
            //else
            //{
            //    MessageBox.Show("未添加泊松噪声！");
            //}

            //if (clb_setMod.GetItemChecked(1))
            //{
            //    MessageBox.Show("添加了平均噪声！");
            //}
            //else
            //{
            //    MessageBox.Show("未添加平均噪声！");
            //}
        }

        private void btn_Finish_Click(object sender, EventArgs e)
        {
            MessageBox.Show("您选择添加了" + strCollected, "提示");
        }
    }
}
