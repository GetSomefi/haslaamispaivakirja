[Uno.Compiler.UxGenerated]
public partial class BasicSwipeToggleBig: Fuse.Controls.Panel
{
    bool _field_Sendable;
    [global::Uno.UX.UXOriginSetter("SetSendable")]
    public bool Sendable
    {
        get { return _field_Sendable; }
        set { SetSendable(value, null); }
    }
    public void SetSendable(bool value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Sendable)
        {
            _field_Sendable = value;
            OnPropertyChanged("Sendable", origin);
        }
    }
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
    global::Uno.UX.Property<bool> this_Sendable_inst;
    global::Uno.UX.Property<bool> temp2_Value_inst;
    internal global::Fuse.Gestures.SwipeGesture swipe;
    internal global::Fuse.Triggers.Actions.Callback TheClick;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    internal global::Fuse.Controls.Rectangle handle;
    internal global::Fuse.Controls.Rectangle background;
    static BasicSwipeToggleBig()
    {
    }
    [global::Uno.UX.UXConstructor]
    public BasicSwipeToggleBig()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.Constant(this);
        swipe = new global::Fuse.Gestures.SwipeGesture();
        swipe_IsActive_inst = new Haslaamispaivakirja_FuseGesturesSwipeGesture_IsActive_Property(swipe, __selector0);
        var temp4 = new global::Fuse.Reactive.Property(temp3, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_IsActive.Singleton);
        handle = new global::Fuse.Controls.Rectangle();
        handle_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(handle, __selector1);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        background = new global::Fuse.Controls.Rectangle();
        background_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(background, __selector1);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Animations.Change<float4>(handle_Color_inst);
        temp_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp, __selector2);
        var temp7 = new global::Fuse.Reactive.Property(temp5, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor.Singleton);
        var temp1 = new global::Fuse.Animations.Change<float4>(background_Color_inst);
        temp1_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp1, __selector2);
        var temp8 = new global::Fuse.Reactive.Property(temp6, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor.Singleton);
        this_Sendable_inst = new Haslaamispaivakirja_BasicSwipeToggleBig_Sendable_Property(this, __selector3);
        var temp9 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Triggers.Actions.Set<bool>(this_Sendable_inst);
        temp2_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property(temp2, __selector2);
        var temp10 = new global::Fuse.Reactive.Property(temp9, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_IsActive.Singleton);
        var temp11 = new global::Fuse.Reactive.Data("isOn");
        var temp12 = new global::Fuse.Reactive.Constant(this);
        var temp13 = new global::Fuse.Reactive.Property(temp12, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor.Singleton);
        var temp14 = new global::Fuse.Reactive.Constant(this);
        var temp15 = new global::Fuse.Reactive.Property(temp14, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor.Singleton);
        var temp16 = new global::Fuse.Reactive.Data("isOnVal");
        var temp17 = new global::Fuse.Reactive.DataBinding(swipe_IsActive_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Gestures.SwipingAnimation(swipe);
        var temp19 = new global::Fuse.Animations.Move();
        var temp20 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
        var temp21 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp8, Fuse.Reactive.BindingMode.Read);
        var temp22 = new global::Fuse.Gestures.Clicked();
        var temp23 = new global::Fuse.Gestures.ToggleSwipeActive();
        TheClick = new global::Fuse.Triggers.Actions.Callback();
        var temp24 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp11);
        var temp25 = new global::Fuse.Controls.Shadow();
        var temp26 = new global::fa_times();
        var temp27 = new global::Fuse.Reactive.DataBinding(handle_Color_inst, temp13, Fuse.Reactive.BindingMode.Read);
        var temp28 = new global::Fuse.Reactive.DataBinding(background_Color_inst, temp15, Fuse.Reactive.BindingMode.Read);
        var temp29 = new global::Fuse.Reactive.DataBinding(this_Sendable_inst, temp16, Fuse.Reactive.BindingMode.Default);
        this.PrimaryColor = float4(1f, 1f, 1f, 1f);
        this.SecondaryColor = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
        this.Opacity = 0.7f;
        this.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(34f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        swipe.Type = Fuse.Gestures.SwipeType.Active;
        swipe.Direction = Fuse.Gestures.SwipeDirection.Right;
        swipe.Length = 46f;
        swipe.Name = __selector4;
        swipe.SourceLineNumber = 8;
        swipe.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        swipe.Bindings.Add(temp17);
        temp4.SourceLineNumber = 8;
        temp4.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp18.SourceLineNumber = 9;
        temp18.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp18.Animators.Add(temp19);
        temp18.Animators.Add(temp);
        temp18.Animators.Add(temp1);
        temp18.Bindings.Add(temp20);
        temp18.Bindings.Add(temp21);
        temp19.X = 46f;
        temp19.Target = handle;
        temp7.SourceLineNumber = 11;
        temp7.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp5.SourceLineNumber = 11;
        temp5.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp8.SourceLineNumber = 12;
        temp8.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp6.SourceLineNumber = 12;
        temp6.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp22.SourceLineNumber = 15;
        temp22.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp22.Actions.Add(temp23);
        temp22.Actions.Add(temp2);
        temp22.Actions.Add(TheClick);
        temp22.Bindings.Add(temp24);
        temp22.Bindings.Add(temp_eb13);
        temp23.SourceLineNumber = 16;
        temp23.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp23.Target = swipe;
        temp2.SourceLineNumber = 17;
        temp2.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp10.SourceLineNumber = 17;
        temp10.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp9.SourceLineNumber = 17;
        temp9.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        TheClick.SourceLineNumber = 18;
        TheClick.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        TheClick.Handler += temp_eb13.OnEvent;
        temp11.SourceLineNumber = 18;
        temp11.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        handle.CornerRadius = float4(28f, 28f, 28f, 28f);
        handle.Width = new Uno.UX.Size(28f, Uno.UX.Unit.Unspecified);
        handle.Alignment = Fuse.Elements.Alignment.Left;
        handle.Margin = float4(3f, 3f, 3f, 3f);
        handle.Name = __selector5;
        handle.SourceLineNumber = 26;
        handle.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        handle.Children.Add(temp25);
        handle.Children.Add(temp26);
        handle.Bindings.Add(temp27);
        temp25.Distance = 1f;
        temp25.Size = 1f;
        temp25.Color = float4(0f, 0f, 0f, 0.2666667f);
        temp25.SourceLineNumber = 27;
        temp25.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp26.FontSize = 18f;
        temp26.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp26.Color = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
        temp26.Alignment = Fuse.Elements.Alignment.Center;
        temp26.Margin = float4(-1f, 1f, 0f, 0f);
        temp26.SourceLineNumber = 28;
        temp26.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp13.SourceLineNumber = 26;
        temp13.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp12.SourceLineNumber = 26;
        temp12.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        background.CornerRadius = float4(28f, 28f, 28f, 28f);
        background.Alignment = Fuse.Elements.Alignment.Default;
        background.Margin = float4(0f, 0f, 0f, 0f);
        background.Padding = float4(0f, 0f, 0f, 0f);
        background.Opacity = 1f;
        background.Layer = Fuse.Layer.Background;
        background.Name = __selector6;
        background.SourceLineNumber = 31;
        background.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        background.Bindings.Add(temp28);
        temp15.SourceLineNumber = 31;
        temp15.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp14.SourceLineNumber = 31;
        temp14.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp16.SourceLineNumber = 1;
        temp16.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        this.Children.Add(swipe);
        this.Children.Add(temp18);
        this.Children.Add(temp22);
        this.Children.Add(handle);
        this.Children.Add(background);
        this.Bindings.Add(temp29);
    }
    static global::Uno.UX.Selector __selector0 = "IsActive";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Sendable";
    static global::Uno.UX.Selector __selector4 = "swipe";
    static global::Uno.UX.Selector __selector5 = "handle";
    static global::Uno.UX.Selector __selector6 = "background";
}
