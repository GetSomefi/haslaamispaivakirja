namespace basic
{
    [Uno.Compiler.UxGenerated]
    public partial class TextBoxAction: Fuse.Controls.TextInput
    {
        static TextBoxAction()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextBoxAction()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Drawing.SolidColor();
            this.ActionStyle = Fuse.Controls.TextInputActionStyle.Go;
            this.TextColor = Fuse.Drawing.Colors.White;
            this.CaretColor = Fuse.Drawing.Colors.White;
            this.Padding = float4(10f, 10f, 0f, 10f);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/basic.TextBox copy.ux";
            temp.Color = float4(0f, 0f, 0f, 0.09803922f);
            this.Background = temp;
        }
    }
}
