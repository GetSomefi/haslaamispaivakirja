[Uno.Compiler.UxGenerated]
public partial class FlyingDock: Fuse.Controls.DockPanel
{
    string _field_Title;
    [global::Uno.UX.UXOriginSetter("SetTitle")]
    public string Title
    {
        get { return _field_Title; }
        set { SetTitle(value, null); }
    }
    public void SetTitle(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Title)
        {
            _field_Title = value;
            OnPropertyChanged("Title", origin);
        }
    }
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float> home_Opacity_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> this_Title_inst;
    internal global::Fuse.Controls.Rectangle home;
    internal global::Fuse.Reactive.EventBinding temp_eb15;
    internal global::Fuse.Reactive.EventBinding temp_eb16;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "home",
        "temp_eb15",
        "temp_eb16"
    };
    static FlyingDock()
    {
    }
    [global::Uno.UX.UXConstructor]
    public FlyingDock(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Title_inst = new Haslaamispaivakirja_FlyingDock_Title_Property(this, __selector0);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = "moi: ";
        var temp3 = new global::Fuse.Reactive.Constant(temp2);
        var temp4 = new global::Fuse.Reactive.Data("Title");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(temp, __selector1);
        var temp5 = new global::Fuse.Reactive.Add(temp3, temp4);
        var temp6 = new global::Fuse.Reactive.Data("goHome");
        var temp7 = new global::Fuse.Reactive.Data("goSplash");
        home = new global::Fuse.Controls.Rectangle();
        home_Opacity_inst = new Haslaamispaivakirja_FuseElementsElement_Opacity_Property(home, __selector2);
        var temp1 = new global::Fuse.Triggers.WhileString();
        temp1_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileString_Value_Property(temp1, __selector1);
        var temp8 = new global::Fuse.Navigation.PageExpression("Title");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.Grid();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::fa_home();
        temp_eb15 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp14 = new global::Fuse.Controls.StackPanel();
        var temp15 = new global::header.Text();
        temp_eb16 = new global::Fuse.Reactive.EventBinding(temp7);
        var temp16 = new global::Fuse.Controls.StackPanel();
        var temp17 = new global::Fuse.Controls.Rectangle();
        var temp18 = new global::fa_cog();
        var temp19 = new global::Fuse.Drawing.LinearGradient();
        var temp20 = new global::Fuse.Drawing.GradientStop();
        var temp21 = new global::Fuse.Drawing.GradientStop();
        var temp22 = new global::Fuse.Animations.Change<float>(home_Opacity_inst);
        var temp23 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/FlyingDock.ux";
        temp9.LineNumber = 5;
        temp9.FileName = "Components/FlyingDock.ux";
        temp9.SourceLineNumber = 5;
        temp9.SourceFileName = "Components/FlyingDock.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Components/FlyingDock.js"));
        temp10.ColumnCount = 3;
        temp10.Margin = float4(0f, 0f, 0f, 15f);
        temp10.Padding = float4(0f, 15f, 0f, 0f);
        temp10.SourceLineNumber = 6;
        temp10.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp10, Fuse.Layouts.Dock.Top);
        temp10.Background = temp19;
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp14);
        temp10.Children.Add(temp16);
        temp11.Margin = float4(5f, 0f, 5f, 0f);
        temp11.SourceLineNumber = 7;
        temp11.SourceFileName = "Components/FlyingDock.ux";
        temp11.Children.Add(temp);
        temp11.Children.Add(home);
        temp.SourceLineNumber = 8;
        temp.SourceFileName = "Components/FlyingDock.ux";
        temp.Bindings.Add(temp12);
        temp5.SourceLineNumber = 8;
        temp5.SourceFileName = "Components/FlyingDock.ux";
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "Components/FlyingDock.ux";
        temp4.SourceLineNumber = 8;
        temp4.SourceFileName = "Components/FlyingDock.ux";
        home.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        home.Name = __selector3;
        home.SourceLineNumber = 9;
        home.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(home, temp_eb15.OnEvent);
        home.Children.Add(temp13);
        home.Bindings.Add(temp_eb15);
        temp13.FontSize = 18f;
        temp13.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp13.Color = Fuse.Drawing.Colors.White;
        temp13.Alignment = Fuse.Elements.Alignment.Default;
        temp13.Margin = float4(10f, 5f, 5f, 5f);
        temp13.Opacity = 1f;
        temp13.SourceLineNumber = 10;
        temp13.SourceFileName = "Components/FlyingDock.ux";
        temp6.SourceLineNumber = 9;
        temp6.SourceFileName = "Components/FlyingDock.ux";
        temp14.Margin = float4(5f, 0f, 5f, 0f);
        temp14.SourceLineNumber = 13;
        temp14.SourceFileName = "Components/FlyingDock.ux";
        temp14.Children.Add(temp15);
        temp15.Value = "The Mood";
        temp15.FontSize = 20f;
        temp15.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp15.Alignment = Fuse.Elements.Alignment.Default;
        temp15.Margin = float4(0f, 4f, 0f, 0f);
        temp15.SourceLineNumber = 14;
        temp15.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb16.OnEvent);
        temp15.Bindings.Add(temp_eb16);
        temp7.SourceLineNumber = 14;
        temp7.SourceFileName = "Components/FlyingDock.ux";
        temp16.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp16.Margin = float4(5f, 0f, 5f, 0f);
        temp16.SourceLineNumber = 16;
        temp16.SourceFileName = "Components/FlyingDock.ux";
        temp16.Children.Add(temp17);
        temp17.SourceLineNumber = 17;
        temp17.SourceFileName = "Components/FlyingDock.ux";
        temp17.Children.Add(temp18);
        temp18.FontSize = 18f;
        temp18.TextAlignment = Fuse.Controls.TextAlignment.Right;
        temp18.Color = Fuse.Drawing.Colors.White;
        temp18.Alignment = Fuse.Elements.Alignment.Default;
        temp18.Margin = float4(5f, 5f, 10f, 5f);
        temp18.Opacity = 1f;
        temp18.SourceLineNumber = 18;
        temp18.SourceFileName = "Components/FlyingDock.ux";
        temp19.Stops.Add(temp20);
        temp19.Stops.Add(temp21);
        temp20.Offset = 0f;
        temp20.Color = float4(0f, 0f, 0f, 0.3490196f);
        temp21.Offset = 1f;
        temp21.Color = float4(0f, 0f, 0f, 0f);
        temp1.Equals = "firstpage";
        temp1.SourceLineNumber = 26;
        temp1.SourceFileName = "Components/FlyingDock.ux";
        temp1.Animators.Add(temp22);
        temp1.Bindings.Add(temp23);
        temp22.Value = 0.1f;
        temp8.SourceLineNumber = 26;
        temp8.SourceFileName = "Components/FlyingDock.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(home);
        __g_nametable.Objects.Add(temp_eb15);
        __g_nametable.Objects.Add(temp_eb16);
        __g_nametable.Properties.Add(this_Title_inst);
        this.Children.Add(temp9);
        this.Children.Add(temp10);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Title";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Opacity";
    static global::Uno.UX.Selector __selector3 = "home";
}
