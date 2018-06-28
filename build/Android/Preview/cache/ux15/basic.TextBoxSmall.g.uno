namespace basic
{
    [Uno.Compiler.UxGenerated]
    public partial class TextBoxSmall: Fuse.Controls.TextBox
    {
        static TextBoxSmall()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextBoxSmall()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.FontSize = 14f;
            this.TextColor = Fuse.Drawing.Colors.White;
            this.CaretColor = Fuse.Drawing.Colors.White;
            this.Height = new Uno.UX.Size(26f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/basic.TextBoxSmall.ux";
        }
    }
}
