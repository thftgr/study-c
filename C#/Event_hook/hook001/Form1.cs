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

            FindOsu();

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
            FindOsu();

        }



        private void send_Event_Button_clicked(object sender, EventArgs e)
        {
            SendEvent();
        }


        private void SendEvent()
        {



            SendKeys.SendWait("p");
            keybd_event(0x50,0,0x00,0);
            keybd_event(0x50, 0, 0x02, 0);

        }


        private void FindOsu()
        {
            //핸들을 찾는다. Spy+를 통해 찾은 클래스 이름과 캡션을 이용하면 된다. 둘 중 하나만 알경우에도 찾을 수 있다. 그때는 하나의 인자를 null로 넘겨 주면된다.
            handle = FindWindow(null, "osu!");
            //찾은 핸들에서 자식 윈도우 핸들을 찾기 위해서는 FindWindowEx를 이용한다.


            //handle = FindWindowEx(handle, 0, null, "");
            //handle = FindWindowEx(handle, 0, null, "");
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
