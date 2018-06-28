[Uno.Compiler.UxGenerated]
public partial class BasicSwipeToggle: Fuse.Controls.Panel
{
    float4 _field_PrimaryColor;
    [global::Uno.UX.UXOriginSetter("SetPrimaryColor")]
    public float4 PrimaryColor
    {
        get { return _field_PrimaryColor; }
        set { SetPrimaryColor(value, null); }
    }
    public void SetPrimaryColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_PrimaryColor)
        {
            _field_PrimaryColor = value;
            OnPropertyChanged("PrimaryColor", origin);
        }
    }
    float4 _field_SecondaryColor;
    [global::Uno.UX.UXOriginSetter("SetSecondaryColor")]
    public float4 SecondaryColor
    {
        get { return _field_SecondaryColor; }
        set { SetSecondaryColor(value, null); }
    }
    public void SetSecondaryColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_SecondaryColor)
        {
            _field_SecondaryColor = value;
            OnPropertyChanged("SecondaryColor", origin);
        }
    }
    float _field_Opacity;
    [global::Uno.UX.UXOriginSetter("SetOpacity")]
    public float Opacity
    {
        get { return _field_Opacity; }
        set { SetOpacity(value, null); }
    }
    public void SetOpacity(float value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Opacity)
        {
            _field_Opacity = value;
            OnPropertyChanged("Opacity", origin);
        }
    }
    bool _field_IsActive;
    [global::Uno.UX.UXOriginSetter("SetIsActive")]
    public bool IsActive
    {
        get { return _field_IsActive; }
        set { SetIsActive(value, null); }
    }
    public void SetIsActive(bool value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_IsActive)
        {
            _field_IsActive = value;
            OnPropertyChanged("IsActive", origin);
        }
    }
    global::Uno.UX.Property<bool> swipe_IsActive_inst;
    global::Uno.UX.Property<float4> handle_Color_inst;
    global::Uno.UX.Property<float4> background_Color_inst;
    global::Uno.UX.Property<float4> temp_Value_inst;
    global::Uno.UX.Property<float4> temp1_Value_inst;
    global::Uno.UX.Property<bool> TheClick_IsActive_inst;
    internal global::Fuse.Gestures.SwipeGesture swipe;
    internal global::Fuse.Triggers.Actions.Callback TheClick;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    internal global::Fuse.Controls.Rectangle handle;
    internal global::Fuse.Controls.Rectangle background;
    static BasicSwipeToggle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public BasicSwipeToggle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        swipe = new global::Fuse.Gestures.SwipeGesture();
        swipe_IsActive_inst = new Haslaamispaivakirja_FuseGesturesSwipeGesture_IsActive_Property(swipe, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, Haslaamispaivakirja_accessor_BasicSwipeToggle_IsActive.Singleton);
        handle = new global::Fuse.Controls.Rectangle();
        handle_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(handle, __selector1);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        background = new global::Fuse.Controls.Rectangle();
        background_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(background, __selector1);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Animations.Change<float4>(handle_Color_inst);
        temp_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp, __selector2);
        var temp6 = new global::Fuse.Reactive.Property(temp4, Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor.Singleton);
        var temp1 = new global::Fuse.Animations.Change<float4>(background_Color_inst);
        temp1_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp1, __selector2);
        var temp7 = new global::Fuse.Reactive.Property(temp5, Haslaamispaivakirja_accessor_BasicSwipeToggle_PrimaryColor.Singleton);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        var temp9 = new global::Fuse.Reactive.Data("isThisActive");
        TheClick = new global::Fuse.Triggers.Actions.Callback();
        TheClick_IsActive_inst = new Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property(TheClick, __selector0);
        var temp10 = new global::Fuse.Reactive.Property(temp8, Haslaamispaivakirja_accessor_BasicSwipeToggle_IsActive.Singleton);
        var temp11 = new global::Fuse.Reactive.Constant(this);
        var temp12 = new global::Fuse.Reactive.Property(temp11, Haslaamispaivakirja_accessor_BasicSwipeToggle_PrimaryColor.Singleton);
        var temp13 = new global::Fuse.Reactive.Constant(this);
        var temp14 = new global::Fuse.Reactive.Property(temp13, Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor.Singleton);
        var temp15 = new global::Fuse.Reactive.DataBinding(swipe_IsActive_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Gestures.SwipingAnimation(swipe);
        var temp17 = new global::Fuse.Animations.Move();
        var temp18 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Read);
        var temp19 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
        var temp20 = new global::Fuse.Gestures.Clicked();
        var temp21 = new global::Fuse.Gestures.ToggleSwipeActive();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp9);
        var temp22 = new global::Fuse.Reactive.DataBinding(TheClick_IsActive_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Controls.Shadow();
        var temp24 = new global::fa_times();
        var temp25 = new global::Fuse.Reactive.DataBinding(handle_Color_inst, temp12, Fuse.Reactive.BindingMode.Read);
        var temp26 = new global::Fuse.Reactive.DataBinding(background_Color_inst, temp14, Fuse.Reactive.BindingMode.Read);
        this.PrimaryColor = float4(1f, 1f, 1f, 1f);
        this.SecondaryColor = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
        this.Opacity = 0.7f;
        this.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(26f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/BasicSwipeToggle.ux";
        swipe.Type = Fuse.Gestures.SwipeType.Active;
        swipe.Direction = Fuse.Gestures.SwipeDirection.Right;
        swipe.Length = 34f;
        swipe.Name = __selector3;
        swipe.SourceLineNumber = 7;
        swipe.SourceFileName = "Components/BasicSwipeToggle.ux";
        swipe.Bindings.Add(temp15);
        temp3.SourceLineNumber = 7;
        temp3.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp2.SourceLineNumber = 7;
        temp2.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp16.SourceLineNumber = 8;
        temp16.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp16.Animators.Add(temp17);
        temp16.Animators.Add(temp);
        temp16.Animators.Add(temp1);
        temp16.Bindings.Add(temp18);
        temp16.Bindings.Add(temp19);
        temp17.X = 34f;
        temp17.Target = handle;
        temp6.SourceLineNumber = 10;
        temp6.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp4.SourceLineNumber = 10;
        temp4.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp7.SourceLineNumber = 11;
        temp7.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp5.SourceLineNumber = 11;
        temp5.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp20.SourceLineNumber = 14;
        temp20.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp20.Actions.Add(temp21);
        temp20.Actions.Add(TheClick);
        temp20.Bindings.Add(temp_eb12);
        temp20.Bindings.Add(temp22);
        temp21.SourceLineNumber = 15;
        temp21.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp21.Target = swipe;
        TheClick.SourceLineNumber = 16;
        TheClick.SourceFileName = "Components/BasicSwipeToggle.ux";
        TheClick.Handler += temp_eb12.OnEvent;
        temp9.SourceLineNumber = 16;
        temp9.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp10.SourceLineNumber = 16;
        temp10.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp8.SourceLineNumber = 16;
        temp8.SourceFileName = "Components/BasicSwipeToggle.ux";
        handle.CornerRadius = float4(28f, 28f, 28f, 28f);
        handle.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        handle.Alignment = Fuse.Elements.Alignment.Left;
        handle.Margin = float4(3f, 3f, 3f, 3f);
        handle.Name = __selector4;
        handle.SourceLineNumber = 19;
        handle.SourceFileName = "Components/BasicSwipeToggle.ux";
        handle.Children.Add(temp23);
        handle.Children.Add(temp24);
        handle.Bindings.Add(temp25);
        temp23.Distance = 1f;
        temp23.Size = 1f;
        temp23.Color = float4(0f, 0f, 0f, 0.2666667f);
        temp23.SourceLineNumber = 20;
        temp23.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp24.FontSize = 18f;
        temp24.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp24.Color = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
        temp24.Alignment = Fuse.Elements.Alignment.Center;
        temp24.Margin = float4(-1f, 1f, 0f, 0f);
        temp24.SourceLineNumber = 21;
        temp24.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp12.SourceLineNumber = 19;
        temp12.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp11.SourceLineNumber = 19;
        temp11.SourceFileName = "Components/BasicSwipeToggle.ux";
        background.CornerRadius = float4(28f, 28f, 28f, 28f);
        background.Alignment = Fuse.Elements.Alignment.Default;
        background.Margin = float4(0f, 0f, 0f, 0f);
        background.Padding = float4(0f, 0f, 0f, 0f);
        background.Opacity = 1f;
        background.Layer = Fuse.Layer.Background;
        background.Name = __selector5;
        background.SourceLineNumber = 24;
        background.SourceFileName = "Components/BasicSwipeToggle.ux";
        background.Bindings.Add(temp26);
        temp14.SourceLineNumber = 24;
        temp14.SourceFileName = "Components/BasicSwipeToggle.ux";
        temp13.SourceLineNumber = 24;
        temp13.SourceFileName = "Components/BasicSwipeToggle.ux";
        this.Children.Add(swipe);
        this.Children.Add(temp16);
        this.Children.Add(temp20);
        this.Children.Add(handle);
        this.Children.Add(background);
    }
    static global::Uno.UX.Selector __selector0 = "IsActive";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "swipe";
    static global::Uno.UX.Selector __selector4 = "handle";
    static global::Uno.UX.Selector __selector5 = "background";
}
