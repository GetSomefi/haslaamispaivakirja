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
    float _field_Width;
    [global::Uno.UX.UXOriginSetter("SetWidth")]
    public float Width
    {
        get { return _field_Width; }
        set { SetWidth(value, null); }
    }
    public void SetWidth(float value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Width)
        {
            _field_Width = value;
            OnPropertyChanged("Width", origin);
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
    global::Uno.UX.Property<bool> temp3_Value_inst;
    global::Uno.UX.Property<Uno.UX.Size> background_Width_inst;
    internal global::Fuse.Gestures.SwipeGesture swipe;
    internal global::Fuse.Triggers.Actions.Callback TheClick;
    internal global::Fuse.Reactive.EventBinding temp_eb9;
    internal global::Fuse.Triggers.Actions.Callback TheSwipe;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
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
        var temp4 = new global::Fuse.Reactive.Constant(this);
        swipe = new global::Fuse.Gestures.SwipeGesture();
        swipe_IsActive_inst = new Haslaamispaivakirja_FuseGesturesSwipeGesture_IsActive_Property(swipe, __selector0);
        var temp5 = new global::Fuse.Reactive.Property(temp4, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_IsActive.Singleton);
        handle = new global::Fuse.Controls.Rectangle();
        handle_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(handle, __selector1);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        background = new global::Fuse.Controls.Rectangle();
        background_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(background, __selector1);
        var temp7 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Animations.Change<float4>(handle_Color_inst);
        temp_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp, __selector2);
        var temp8 = new global::Fuse.Reactive.Property(temp6, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor.Singleton);
        var temp1 = new global::Fuse.Animations.Change<float4>(background_Color_inst);
        temp1_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp1, __selector2);
        var temp9 = new global::Fuse.Reactive.Property(temp7, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor.Singleton);
        this_Sendable_inst = new Haslaamispaivakirja_BasicSwipeToggleBig_Sendable_Property(this, __selector3);
        var temp10 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Triggers.Actions.Set<bool>(this_Sendable_inst);
        temp2_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property(temp2, __selector2);
        var temp11 = new global::Fuse.Reactive.Property(temp10, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_IsActive.Singleton);
        var temp12 = new global::Fuse.Reactive.Data("isOn");
        var temp13 = new global::Fuse.Reactive.Constant(this);
        var temp3 = new global::Fuse.Triggers.Actions.Set<bool>(this_Sendable_inst);
        temp3_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property(temp3, __selector2);
        var temp14 = new global::Fuse.Reactive.Property(temp13, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_IsActive.Singleton);
        var temp15 = new global::Fuse.Reactive.Data("isOn");
        var temp16 = new global::Fuse.Reactive.Constant(this);
        var temp17 = new global::Fuse.Reactive.Property(temp16, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor.Singleton);
        var temp18 = new global::Fuse.Reactive.Constant(this);
        background_Width_inst = new Haslaamispaivakirja_FuseElementsElement_Width_Property(background, __selector4);
        var temp19 = new global::Fuse.Reactive.Property(temp18, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_Width.Singleton);
        var temp20 = new global::Fuse.Reactive.Constant(this);
        var temp21 = new global::Fuse.Reactive.Property(temp20, Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor.Singleton);
        var temp22 = new global::Fuse.Reactive.Data("isOnVal");
        var temp23 = new global::Fuse.Reactive.DataBinding(swipe_IsActive_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Gestures.SwipingAnimation(swipe);
        var temp25 = new global::Fuse.Animations.Move();
        var temp26 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, Fuse.Reactive.BindingMode.Read);
        var temp27 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, Fuse.Reactive.BindingMode.Read);
        var temp28 = new global::Fuse.Gestures.Clicked();
        var temp29 = new global::Fuse.Triggers.Actions.DebugAction();
        var temp30 = new global::Fuse.Gestures.ToggleSwipeActive();
        TheClick = new global::Fuse.Triggers.Actions.Callback();
        var temp31 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        temp_eb9 = new global::Fuse.Reactive.EventBinding(temp12);
        var temp32 = new global::Fuse.Gestures.Swiped(swipe);
        var temp33 = new global::Fuse.Triggers.Actions.DebugAction();
        TheSwipe = new global::Fuse.Triggers.Actions.Callback();
        var temp34 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp15);
        var temp35 = new global::Fuse.Controls.Shadow();
        var temp36 = new global::fa_times();
        var temp37 = new global::Fuse.Reactive.DataBinding(handle_Color_inst, temp17, Fuse.Reactive.BindingMode.Read);
        var temp38 = new global::Fuse.Reactive.DataBinding(background_Width_inst, temp19, Fuse.Reactive.BindingMode.Read);
        var temp39 = new global::Fuse.Reactive.DataBinding(background_Color_inst, temp21, Fuse.Reactive.BindingMode.Read);
        var temp40 = new global::Fuse.Reactive.DataBinding(this_Sendable_inst, temp22, Fuse.Reactive.BindingMode.Default);
        this.PrimaryColor = float4(1f, 1f, 1f, 1f);
        this.SecondaryColor = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
        this.Opacity = 0.7f;
        this.Width = 80f;
        this.Height = new Uno.UX.Size(34f, Uno.UX.Unit.Unspecified);
        this.Alignment = Fuse.Elements.Alignment.Left;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        swipe.Type = Fuse.Gestures.SwipeType.Active;
        swipe.Direction = Fuse.Gestures.SwipeDirection.Right;
        swipe.Length = 46f;
        swipe.Name = __selector5;
        swipe.SourceLineNumber = 9;
        swipe.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        swipe.Bindings.Add(temp23);
        temp5.SourceLineNumber = 9;
        temp5.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp4.SourceLineNumber = 9;
        temp4.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp24.SourceLineNumber = 10;
        temp24.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp24.Animators.Add(temp25);
        temp24.Animators.Add(temp);
        temp24.Animators.Add(temp1);
        temp24.Bindings.Add(temp26);
        temp24.Bindings.Add(temp27);
        temp25.X = 46f;
        temp25.Target = handle;
        temp8.SourceLineNumber = 12;
        temp8.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp6.SourceLineNumber = 12;
        temp6.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp9.SourceLineNumber = 13;
        temp9.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp7.SourceLineNumber = 13;
        temp7.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp28.SourceLineNumber = 16;
        temp28.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp28.Actions.Add(temp29);
        temp28.Actions.Add(temp30);
        temp28.Actions.Add(temp2);
        temp28.Actions.Add(TheClick);
        temp28.Bindings.Add(temp31);
        temp28.Bindings.Add(temp_eb9);
        temp29.Message = "Clicked!";
        temp29.SourceLineNumber = 17;
        temp29.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp30.SourceLineNumber = 18;
        temp30.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp30.Target = swipe;
        temp2.SourceLineNumber = 19;
        temp2.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp11.SourceLineNumber = 19;
        temp11.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp10.SourceLineNumber = 19;
        temp10.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        TheClick.SourceLineNumber = 20;
        TheClick.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        TheClick.Handler += temp_eb9.OnEvent;
        temp12.SourceLineNumber = 20;
        temp12.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp32.SourceLineNumber = 22;
        temp32.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp32.Actions.Add(temp33);
        temp32.Actions.Add(temp3);
        temp32.Actions.Add(TheSwipe);
        temp32.Bindings.Add(temp34);
        temp32.Bindings.Add(temp_eb10);
        temp33.Message = "Swiped!";
        temp33.SourceLineNumber = 23;
        temp33.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp3.SourceLineNumber = 24;
        temp3.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp14.SourceLineNumber = 24;
        temp14.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp13.SourceLineNumber = 24;
        temp13.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        TheSwipe.SourceLineNumber = 25;
        TheSwipe.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        TheSwipe.Handler += temp_eb10.OnEvent;
        temp15.SourceLineNumber = 25;
        temp15.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        handle.CornerRadius = float4(28f, 28f, 28f, 28f);
        handle.Width = new Uno.UX.Size(28f, Uno.UX.Unit.Unspecified);
        handle.Alignment = Fuse.Elements.Alignment.Left;
        handle.Margin = float4(3f, 3f, 3f, 3f);
        handle.Name = __selector6;
        handle.SourceLineNumber = 33;
        handle.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        handle.Children.Add(temp35);
        handle.Children.Add(temp36);
        handle.Bindings.Add(temp37);
        temp35.Distance = 1f;
        temp35.Size = 1f;
        temp35.Color = float4(0f, 0f, 0f, 0.2666667f);
        temp35.SourceLineNumber = 34;
        temp35.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp36.FontSize = 18f;
        temp36.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp36.Color = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
        temp36.Alignment = Fuse.Elements.Alignment.Center;
        temp36.Margin = float4(-1f, 1f, 0f, 0f);
        temp36.SourceLineNumber = 35;
        temp36.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp17.SourceLineNumber = 33;
        temp17.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp16.SourceLineNumber = 33;
        temp16.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        background.CornerRadius = float4(28f, 28f, 28f, 28f);
        background.Alignment = Fuse.Elements.Alignment.Left;
        background.Margin = float4(0f, 0f, 0f, 0f);
        background.Padding = float4(0f, 0f, 0f, 0f);
        background.Opacity = 1f;
        background.Layer = Fuse.Layer.Background;
        background.Name = __selector7;
        background.SourceLineNumber = 38;
        background.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        background.Bindings.Add(temp38);
        background.Bindings.Add(temp39);
        temp19.SourceLineNumber = 38;
        temp19.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp18.SourceLineNumber = 38;
        temp18.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp21.SourceLineNumber = 38;
        temp21.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp20.SourceLineNumber = 38;
        temp20.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        temp22.SourceLineNumber = 1;
        temp22.SourceFileName = "Components/BasicSwipeToggleBig.ux";
        this.Children.Add(swipe);
        this.Children.Add(temp24);
        this.Children.Add(temp28);
        this.Children.Add(temp32);
        this.Children.Add(handle);
        this.Children.Add(background);
        this.Bindings.Add(temp40);
    }
    static global::Uno.UX.Selector __selector0 = "IsActive";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Sendable";
    static global::Uno.UX.Selector __selector4 = "Width";
    static global::Uno.UX.Selector __selector5 = "swipe";
    static global::Uno.UX.Selector __selector6 = "handle";
    static global::Uno.UX.Selector __selector7 = "background";
}
