[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<Uno.UX.Size> progressBar_Width_inst;
    internal global::Fuse.Controls.Rectangle progressBar;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "progressBar",
        "temp_eb7"
    };
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        progressBar = new global::Fuse.Controls.Rectangle();
        progressBar_Width_inst = new Haslaamispaivakirja_FuseElementsElement_Width_Property(progressBar, __selector0);
        var temp = new global::Fuse.Reactive.Data("goToFirstPage");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.DockPanel();
        var temp3 = new global::Fuse.Controls.Video();
        var temp4 = new global::Fuse.Effects.Blur();
        var temp5 = new global::Fuse.Triggers.ProgressAnimation();
        var temp6 = new global::Fuse.Animations.Change<Uno.UX.Size>(progressBar_Width_inst);
        var temp7 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp8 = new global::generaltext.Text();
        var temp9 = new global::Fuse.Controls.Grid();
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new global::header.Text();
        var temp12 = new global::generaltext.Text();
        var temp13 = new global::basicBtn.Button();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp);
        this.SourceLineNumber = 1;
        this.SourceFileName = "SplashPage.ux";
        temp1.LineNumber = 4;
        temp1.FileName = "SplashPage.ux";
        temp1.SourceLineNumber = 4;
        temp1.SourceFileName = "SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../SplashPage.js"));
        temp2.ClipToBounds = true;
        temp2.SourceLineNumber = 6;
        temp2.SourceFileName = "SplashPage.ux";
        temp2.Children.Add(temp3);
        temp2.Children.Add(progressBar);
        temp2.Children.Add(temp8);
        temp2.Children.Add(temp9);
        temp3.IsLooping = true;
        temp3.AutoPlay = true;
        temp3.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp3.Opacity = 0.7f;
        temp3.Layer = Fuse.Layer.Background;
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "SplashPage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/retkelleoma.mp4"));
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp4.Radius = 3.75f;
        temp4.SourceLineNumber = 9;
        temp4.SourceFileName = "SplashPage.ux";
        temp5.SourceLineNumber = 10;
        temp5.SourceFileName = "SplashPage.ux";
        temp5.Animators.Add(temp6);
        temp6.Value = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        progressBar.Width = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        progressBar.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        progressBar.Opacity = 0.2f;
        progressBar.Name = __selector1;
        progressBar.SourceLineNumber = 15;
        progressBar.SourceFileName = "SplashPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(progressBar, Fuse.Layouts.Dock.Top);
        progressBar.Fill = temp7;
        temp8.Value = "original video by Peter Virtanen";
        temp8.FontSize = 12f;
        temp8.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp8.Margin = float4(15f, 15f, 15f, 15f);
        temp8.Opacity = 0.5f;
        temp8.SourceLineNumber = 17;
        temp8.SourceFileName = "SplashPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Bottom);
        temp9.RowCount = 2;
        temp9.SourceLineNumber = 19;
        temp9.SourceFileName = "SplashPage.ux";
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp13);
        temp10.SourceLineNumber = 20;
        temp10.SourceFileName = "SplashPage.ux";
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp12);
        temp11.Value = "The Mood";
        temp11.FontSize = 40f;
        temp11.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp11.Margin = float4(0f, 50f, 0f, 0f);
        temp11.SourceLineNumber = 21;
        temp11.SourceFileName = "SplashPage.ux";
        temp12.Value = "How are we feeling today?";
        temp12.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp12.Opacity = 0.5f;
        temp12.SourceLineNumber = 22;
        temp12.SourceFileName = "SplashPage.ux";
        temp13.Text = "Aloitetaan";
        temp13.FontSize = 18f;
        temp13.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp13.Margin = float4(50f, 0f, 50f, 0f);
        temp13.SourceLineNumber = 25;
        temp13.SourceFileName = "SplashPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb7.OnEvent);
        temp13.Bindings.Add(temp_eb7);
        temp.SourceLineNumber = 25;
        temp.SourceFileName = "SplashPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(progressBar);
        __g_nametable.Objects.Add(temp_eb7);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "Width";
    static global::Uno.UX.Selector __selector1 = "progressBar";
}
