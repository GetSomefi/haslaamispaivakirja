[Uno.Compiler.UxGenerated]
public partial class LongPressButton: Fuse.Controls.Panel
{
    float4 _field_BackgroundColor;
    [global::Uno.UX.UXOriginSetter("SetBackgroundColor")]
    public float4 BackgroundColor
    {
        get { return _field_BackgroundColor; }
        set { SetBackgroundColor(value, null); }
    }
    public void SetBackgroundColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_BackgroundColor)
        {
            _field_BackgroundColor = value;
            OnPropertyChanged("BackgroundColor", origin);
        }
    }
    global::Uno.UX.Property<float4> Rect_Color_inst;
    global::Uno.UX.Property<bool> Deleted_Value_inst;
    global::Uno.UX.Property<string> Label_Value_inst;
    global::Uno.UX.Property<float4> Label_Color_inst;
    internal global::Fuse.Controls.Text Label;
    internal global::Fuse.Controls.Rectangle Rect;
    internal global::Fuse.Reactive.EventBinding temp_eb16;
    internal global::Fuse.Triggers.WhileTrue Deleted;
    static LongPressButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LongPressButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Constant(this);
        Rect = new global::Fuse.Controls.Rectangle();
        Rect_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(Rect, __selector0);
        var temp1 = new global::Fuse.Reactive.Property(temp, Haslaamispaivakirja_accessor_LongPressButton_BackgroundColor.Singleton);
        Deleted = new global::Fuse.Triggers.WhileTrue();
        Deleted_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property(Deleted, __selector1);
        var temp2 = new global::Fuse.Reactive.Data("eraseData");
        Label = new global::Fuse.Controls.Text();
        Label_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(Label, __selector1);
        Label_Color_inst = new Haslaamispaivakirja_FuseControlsTextControl_Color_Property(Label, __selector0);
        var temp3 = new global::Fuse.Reactive.DataBinding(Rect_Color_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp4 = new global::Fuse.Effects.DropShadow();
        var temp5 = new global::Fuse.Gestures.WhilePressed();
        var temp6 = new global::Fuse.Animations.Change<float4>(Rect_Color_inst);
        var temp7 = new global::Fuse.Animations.Scale();
        var temp8 = new global::Fuse.Triggers.Actions.Set<bool>(Deleted_Value_inst);
        var temp9 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb16 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp10 = new global::Fuse.Animations.Change<string>(Label_Value_inst);
        var temp11 = new global::Fuse.Animations.Change<float4>(Label_Color_inst);
        this.Padding = float4(15f, 15f, 15f, 15f);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/LongPressButton.ux";
        Label.Value = "Tyhjennä";
        Label.FontSize = 16f;
        Label.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Label.Color = float4(1f, 1f, 1f, 1f);
        Label.Name = __selector2;
        Label.SourceLineNumber = 4;
        Label.SourceFileName = "Components/LongPressButton.ux";
        Rect.Layer = Fuse.Layer.Background;
        Rect.Name = __selector3;
        Rect.SourceLineNumber = 6;
        Rect.SourceFileName = "Components/LongPressButton.ux";
        Rect.Bindings.Add(temp3);
        temp1.SourceLineNumber = 6;
        temp1.SourceFileName = "Components/LongPressButton.ux";
        temp.SourceLineNumber = 6;
        temp.SourceFileName = "Components/LongPressButton.ux";
        temp4.Size = 2f;
        temp4.Angle = 90f;
        temp4.Distance = 1f;
        temp4.Spread = 0.2f;
        temp4.Color = float4(0f, 0f, 0f, 0.3764706f);
        temp4.SourceLineNumber = 8;
        temp4.SourceFileName = "Components/LongPressButton.ux";
        temp5.SourceLineNumber = 9;
        temp5.SourceFileName = "Components/LongPressButton.ux";
        temp5.Animators.Add(temp6);
        temp5.Animators.Add(temp7);
        temp5.Actions.Add(temp8);
        temp5.Actions.Add(temp9);
        temp5.Bindings.Add(temp_eb16);
        temp6.Value = float4(0f, 0f, 0f, 1f);
        temp7.Factor = 0.95f;
        temp7.Duration = 0.08;
        temp7.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp8.Value = true;
        temp8.Delay = 3f;
        temp8.SourceLineNumber = 13;
        temp8.SourceFileName = "Components/LongPressButton.ux";
        temp9.Delay = 3f;
        temp9.SourceLineNumber = 14;
        temp9.SourceFileName = "Components/LongPressButton.ux";
        temp9.Handler += temp_eb16.OnEvent;
        temp2.SourceLineNumber = 14;
        temp2.SourceFileName = "Components/LongPressButton.ux";
        Deleted.Name = __selector4;
        Deleted.SourceLineNumber = 17;
        Deleted.SourceFileName = "Components/LongPressButton.ux";
        Deleted.Animators.Add(temp10);
        Deleted.Animators.Add(temp11);
        temp10.Value = "Tiedot poistettu";
        temp11.Value = float4(1f, 1f, 1f, 1f);
        this.Children.Add(Label);
        this.Children.Add(Rect);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(Deleted);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Label";
    static global::Uno.UX.Selector __selector3 = "Rect";
    static global::Uno.UX.Selector __selector4 = "Deleted";
}
