namespace basic
{
    [Uno.Compiler.UxGenerated]
    public partial class TitleText: generaltext.Text
    {
        static TitleText()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TitleText()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.FontSize = 20f;
            this.Margin = float4(0f, 0f, 0f, 5f);
            this.Opacity = 0.6f;
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/basic.TitleText.ux";
        }
    }
}
