namespace header
{
    [Uno.Compiler.UxGenerated]
    public partial class Text: Fuse.Controls.Text
    {
        static Text()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Text()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.FontSize = 30f;
            this.TextAlignment = Fuse.Controls.TextAlignment.Center;
            this.Color = Fuse.Drawing.Colors.White;
            this.Margin = float4(0f, 50f, 0f, 50f);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/header.Text.ux";
            global::Fuse.Controls.DockPanel.SetDock(this, Fuse.Layouts.Dock.Top);
        }
    }
}
