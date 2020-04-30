using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;



namespace hook001
{

    public partial class Form1 : Form
    {

        //사용할 API함수를 임포트 한다.
        [DllImport("USER32.DLL")]
        public static extern uint FindWindow(string lpClassName,
            string lpWindowName);

        [DllImport("user32.dll")]
        public static extern uint FindWindowEx(uint hWnd1, uint hWnd2, string lpsz1, string lpsz2);

        [DllImport("user32.dll")]
        public static extern uint SendMessage(uint hwnd, uint wMsg, uint wParam, uint lParam);

        [DllImport("user32.dll")]
        public static extern uint PostMessage(uint hwnd, uint wMsg, uint wParam, uint lParam);

        [DllImport("user32.dll")]
        private static extern bool SetForegroundWindow(uint hWnd);

        [DllImport("user32.dll")]
        private static extern bool ShowWindowAsync(uint hWnd, int nCmdShow);

        [DllImport("user32.dll")]
        static extern void keybd_event(byte bVk, byte bScan, uint dwFlags,
   int dwExtraInfo);

        uint handle;


        public Form1()
        {
            InitializeComponent();

            FindWindow();

        }
        private static DateTime Delay(int ms)
        {
            DateTime ThisMoment = DateTime.Now;
            TimeSpan duration = new TimeSpan(0, 0, 0, 0, ms);
            DateTime AfterWards = ThisMoment.Add(duration);
            while (AfterWards >= ThisMoment)
            {
                System.Windows.Forms.Application.DoEvents();
                ThisMoment = DateTime.Now;
            }
            return DateTime.Now;
        }

        private void window_Find_button_Click(object sender, EventArgs e)
        {
            FindWindow();

        }
<<<<<<< HEAD

=======
        //uint LParam_calc(uint repeat, uint scanCode, uint Key_UD)
        //{
        //    uint LParam = 0;
        //    //1.0.0.0000.0.00000000.0000000000000000
        //    LParam = Key_UD << 31 | Key_UD << 30 | scanCode << 16 | repeat;
        //    textBox1.AppendText(Convert.ToString(LParam, 2));

        //    return LParam;
        //}
>>>>>>> cfb5ea86b44c9df2c496f05f8f1cc8832de02db3


        private void send_Event_Button_clicked(object sender, EventArgs e)
        {
            SendEvent();
        }


        private void SendEvent()
        {
<<<<<<< HEAD



            SendKeys.SendWait("p");
            keybd_event(0x50,0,0x00,0);
            keybd_event(0x50, 0, 0x02, 0);

=======
            //SendMessage(handle, WM_IME_SETCONTEXT, 0x00000001, 0xC000000F);
            //SendMessage(handle, WM_IME_NOTIFY, 0x00000002, 0x00000000);
            //SendMessage(handle, WM_SETFOCUS, 0x00000000, 0x00000000);
            //SendMessage(handle, 0x001C, 0x00000001, 0x00000000);
            SendMessage(handle, 0x0007, 0x00000000, 0x00000000);
            //SendMessage(handle, 0x0086, 0x00000001, 0x00000000);

            PostMessage(handle, 0x0201, 0x00000001, 0x002403D2);
            
            SendMessage(handle, 0x0215, 0x00000000, 0x00710BA0);
            
>>>>>>> cfb5ea86b44c9df2c496f05f8f1cc8832de02db3
        }


        private void FindWindow()
        {
            //핸들을 찾는다. Spy+를 통해 찾은 클래스 이름과 캡션을 이용하면 된다. 둘 중 하나만 알경우에도 찾을 수 있다. 그때는 하나의 인자를 null로 넘겨 주면된다.
            //handle = FindWindow(null, "osu!");
            handle = FindWindow("Qt5QWindowIcon", "SmartRF Flash Programmer 2 - Texas Instruments");
            //찾은 핸들에서 자식 윈도우 핸들을 찾기 위해서는 FindWindowEx를 이용한다.


            //handle = FindWindowEx(handle, 0, null, "");
            //handle = FindWindowEx(handle, 0, null, "");
<<<<<<< HEAD
=======

>>>>>>> cfb5ea86b44c9df2c496f05f8f1cc8832de02db3
            if (!handle.ToString().Equals("0"))
            {
                label1.Text = handle.ToString("X8");
            }
            else
            {
                label1.Text = "can't find window";
            }
        }

        private void getwindowtop_Click(object sender, EventArgs e)
        {
            ShowWindowAsync(handle, 1);
            SetForegroundWindow(handle);

        }
    }
}
