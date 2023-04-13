#pragma once
#include "glad.h"

namespace gl {
    typedef GLboolean  b8;
    typedef GLbyte     i8;
    typedef GLubyte    u8;
    typedef GLshort    i16;
    typedef GLushort   u16;
    typedef GLint      i32;
    typedef GLuint     u32;
    typedef GLfixed    fixed;
    typedef GLint64    i64;
    typedef GLuint64   u64;
    typedef GLsizei    sizei;
    typedef GLintptr   intptr;
    typedef GLsizeiptr sizeiptr;
    typedef GLsync     sync;
    typedef GLbitfield bitfield;
    typedef GLhalf     f16;
    typedef GLfloat    f32;
    typedef GLclampf   f32clamped;
    typedef GLdouble   f64;
    typedef GLclampd   f64clamped;

    typedef GLenum enum_t;

    enum class SyncStatus : GLenum {
        eAlreadySignaled = GLenum(GL_ALREADY_SIGNALED),
        eTimeoutExpired = GLenum(GL_TIMEOUT_EXPIRED),
        eConditionSatisfied = GLenum(GL_CONDITION_SATISFIED),
        eWaitFailed = GLenum(GL_WAIT_FAILED),
    };
    enum class SyncCondition : GLenum {
        eSyncGpuCommandsComplete = GLenum(GL_SYNC_GPU_COMMANDS_COMPLETE),
    };
    enum class ProgramResourceProperty : GLenum {
        eNumCompatibleSubroutines = GLenum(GL_NUM_COMPATIBLE_SUBROUTINES),
        eCompatibleSubroutines = GLenum(GL_COMPATIBLE_SUBROUTINES),
        eUniform = GLenum(GL_UNIFORM),
        eIsPerPatch = GLenum(GL_IS_PER_PATCH),
        eNameLength = GLenum(GL_NAME_LENGTH),
        eType = GLenum(GL_TYPE),
        eArraySize = GLenum(GL_ARRAY_SIZE),
        eOffset = GLenum(GL_OFFSET),
        eBlockIndex = GLenum(GL_BLOCK_INDEX),
        eArrayStride = GLenum(GL_ARRAY_STRIDE),
        eMatrixStride = GLenum(GL_MATRIX_STRIDE),
        eIsRowMajor = GLenum(GL_IS_ROW_MAJOR),
        eAtomicCounterBufferIndex = GLenum(GL_ATOMIC_COUNTER_BUFFER_INDEX),
        eBufferBinding = GLenum(GL_BUFFER_BINDING),
        eBufferDataSize = GLenum(GL_BUFFER_DATA_SIZE),
        eNumActiveVariables = GLenum(GL_NUM_ACTIVE_VARIABLES),
        eActiveVariables = GLenum(GL_ACTIVE_VARIABLES),
        eReferencedByVertexShader = GLenum(GL_REFERENCED_BY_VERTEX_SHADER),
        eReferencedByTessControlShader = GLenum(GL_REFERENCED_BY_TESS_CONTROL_SHADER),
        eReferencedByTessEvaluationShader = GLenum(GL_REFERENCED_BY_TESS_EVALUATION_SHADER),
        eReferencedByGeometryShader = GLenum(GL_REFERENCED_BY_GEOMETRY_SHADER),
        eReferencedByFragmentShader = GLenum(GL_REFERENCED_BY_FRAGMENT_SHADER),
        eReferencedByComputeShader = GLenum(GL_REFERENCED_BY_COMPUTE_SHADER),
        eTopLevelArraySize = GLenum(GL_TOP_LEVEL_ARRAY_SIZE),
        eTopLevelArrayStride = GLenum(GL_TOP_LEVEL_ARRAY_STRIDE),
        eLocation = GLenum(GL_LOCATION),
        eLocationIndex = GLenum(GL_LOCATION_INDEX),
        eLocationComponent = GLenum(GL_LOCATION_COMPONENT),
        eTransformFeedbackBufferIndex = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_INDEX),
        eTransformFeedbackBufferStride = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE),
    };
    enum class QueryCounterTarget : GLenum {
        eTimestamp = GLenum(GL_TIMESTAMP),
    };
    enum class BindTransformFeedbackTarget : GLenum {
        eTransformFeedback = GLenum(GL_TRANSFORM_FEEDBACK),
    };
    enum class RenderbufferTarget : GLenum {
        eRenderbuffer = GLenum(GL_RENDERBUFFER),
    };
    enum class RenderbufferParameterName : GLenum {
        eRenderbufferSamples = GLenum(GL_RENDERBUFFER_SAMPLES),
        eRenderbufferWidth = GLenum(GL_RENDERBUFFER_WIDTH),
        eRenderbufferHeight = GLenum(GL_RENDERBUFFER_HEIGHT),
        eRenderbufferInternalFormat = GLenum(GL_RENDERBUFFER_INTERNAL_FORMAT),
        eRenderbufferRedSize = GLenum(GL_RENDERBUFFER_RED_SIZE),
        eRenderbufferGreenSize = GLenum(GL_RENDERBUFFER_GREEN_SIZE),
        eRenderbufferBlueSize = GLenum(GL_RENDERBUFFER_BLUE_SIZE),
        eRenderbufferAlphaSize = GLenum(GL_RENDERBUFFER_ALPHA_SIZE),
        eRenderbufferDepthSize = GLenum(GL_RENDERBUFFER_DEPTH_SIZE),
        eRenderbufferStencilSize = GLenum(GL_RENDERBUFFER_STENCIL_SIZE),
    };
    enum class SyncParameterName : GLenum {
        eObjectType = GLenum(GL_OBJECT_TYPE),
        eSyncCondition = GLenum(GL_SYNC_CONDITION),
        eSyncStatus = GLenum(GL_SYNC_STATUS),
        eSyncFlags = GLenum(GL_SYNC_FLAGS),
    };
    enum class FramebufferTarget : GLenum {
        eReadFramebuffer = GLenum(GL_READ_FRAMEBUFFER),
        eDrawFramebuffer = GLenum(GL_DRAW_FRAMEBUFFER),
        eFramebuffer = GLenum(GL_FRAMEBUFFER),
    };
    enum class ClipControlOrigin : GLenum {
        eLowerLeft = GLenum(GL_LOWER_LEFT),
        eUpperLeft = GLenum(GL_UPPER_LEFT),
    };
    enum class TransformFeedbackBufferMode : GLenum {
        eInterleavedAttribs = GLenum(GL_INTERLEAVED_ATTRIBS),
        eSeparateAttribs = GLenum(GL_SEPARATE_ATTRIBS),
    };
    enum class TransformFeedbackPName : GLenum {
        eTransformFeedbackBufferStart = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_START),
        eTransformFeedbackBufferSize = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE),
        eTransformFeedbackBufferBinding = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING),
        eTransformFeedbackPaused = GLenum(GL_TRANSFORM_FEEDBACK_PAUSED),
        eTransformFeedbackActive = GLenum(GL_TRANSFORM_FEEDBACK_ACTIVE),
    };
    enum class ShaderParameterName : GLenum {
        eShaderType = GLenum(GL_SHADER_TYPE),
        eDeleteStatus = GLenum(GL_DELETE_STATUS),
        eCompileStatus = GLenum(GL_COMPILE_STATUS),
        eInfoLogLength = GLenum(GL_INFO_LOG_LENGTH),
        eShaderSourceLength = GLenum(GL_SHADER_SOURCE_LENGTH),
    };
    enum class UniformPName : GLenum {
        eUniformType = GLenum(GL_UNIFORM_TYPE),
        eUniformSize = GLenum(GL_UNIFORM_SIZE),
        eUniformNameLength = GLenum(GL_UNIFORM_NAME_LENGTH),
        eUniformBlockIndex = GLenum(GL_UNIFORM_BLOCK_INDEX),
        eUniformOffset = GLenum(GL_UNIFORM_OFFSET),
        eUniformArrayStride = GLenum(GL_UNIFORM_ARRAY_STRIDE),
        eUniformMatrixStride = GLenum(GL_UNIFORM_MATRIX_STRIDE),
        eUniformIsRowMajor = GLenum(GL_UNIFORM_IS_ROW_MAJOR),
        eUniformAtomicCounterBufferIndex = GLenum(GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX),
    };
    enum class BufferUsageARB : GLenum {
        eStreamDraw = GLenum(GL_STREAM_DRAW),
        eStreamRead = GLenum(GL_STREAM_READ),
        eStreamCopy = GLenum(GL_STREAM_COPY),
        eStaticDraw = GLenum(GL_STATIC_DRAW),
        eStaticRead = GLenum(GL_STATIC_READ),
        eStaticCopy = GLenum(GL_STATIC_COPY),
        eDynamicDraw = GLenum(GL_DYNAMIC_DRAW),
        eDynamicRead = GLenum(GL_DYNAMIC_READ),
        eDynamicCopy = GLenum(GL_DYNAMIC_COPY),
    };
    enum class QueryTarget : GLenum {
        eTimeElapsed = GLenum(GL_TIME_ELAPSED),
        eSamplesPassed = GLenum(GL_SAMPLES_PASSED),
        eAnySamplesPassed = GLenum(GL_ANY_SAMPLES_PASSED),
        ePrimitivesGenerated = GLenum(GL_PRIMITIVES_GENERATED),
        eTransformFeedbackPrimitivesWritten = GLenum(GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN),
        eAnySamplesPassedConservative = GLenum(GL_ANY_SAMPLES_PASSED_CONSERVATIVE),
    };
    enum class BufferPointerNameARB : GLenum {
        eBufferMapPointer = GLenum(GL_BUFFER_MAP_POINTER),
    };
    enum class CopyBufferSubDataTarget : GLenum {
        eArrayBuffer = GLenum(GL_ARRAY_BUFFER),
        eElementArrayBuffer = GLenum(GL_ELEMENT_ARRAY_BUFFER),
        ePixelPackBuffer = GLenum(GL_PIXEL_PACK_BUFFER),
        ePixelUnpackBuffer = GLenum(GL_PIXEL_UNPACK_BUFFER),
        eUniformBuffer = GLenum(GL_UNIFORM_BUFFER),
        eTextureBuffer = GLenum(GL_TEXTURE_BUFFER),
        eTransformFeedbackBuffer = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER),
        eCopyReadBuffer = GLenum(GL_COPY_READ_BUFFER),
        eCopyWriteBuffer = GLenum(GL_COPY_WRITE_BUFFER),
        eDrawIndirectBuffer = GLenum(GL_DRAW_INDIRECT_BUFFER),
        eShaderStorageBuffer = GLenum(GL_SHADER_STORAGE_BUFFER),
        eDispatchIndirectBuffer = GLenum(GL_DISPATCH_INDIRECT_BUFFER),
        eQueryBuffer = GLenum(GL_QUERY_BUFFER),
        eAtomicCounterBuffer = GLenum(GL_ATOMIC_COUNTER_BUFFER),
    };
    enum class VertexAttribPointerPropertyARB : GLenum {
        eVertexAttribArrayPointer = GLenum(GL_VERTEX_ATTRIB_ARRAY_POINTER),
    };
    enum class VertexAttribEnum : GLenum {
        eVertexAttribArrayEnabled = GLenum(GL_VERTEX_ATTRIB_ARRAY_ENABLED),
        eVertexAttribArraySize = GLenum(GL_VERTEX_ATTRIB_ARRAY_SIZE),
        eVertexAttribArrayStride = GLenum(GL_VERTEX_ATTRIB_ARRAY_STRIDE),
        eVertexAttribArrayType = GLenum(GL_VERTEX_ATTRIB_ARRAY_TYPE),
        eCurrentVertexAttrib = GLenum(GL_CURRENT_VERTEX_ATTRIB),
        eVertexAttribArrayNormalized = GLenum(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED),
        eVertexAttribArrayBufferBinding = GLenum(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING),
        eVertexAttribArrayInteger = GLenum(GL_VERTEX_ATTRIB_ARRAY_INTEGER),
        eVertexAttribArrayDivisor = GLenum(GL_VERTEX_ATTRIB_ARRAY_DIVISOR),
    };
    enum class UniformBlockPName : GLenum {
        eUniformBlockReferencedByTessControlShader = GLenum(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER),
        eUniformBlockReferencedByTessEvaluationShader = GLenum(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER),
        eUniformBlockBinding = GLenum(GL_UNIFORM_BLOCK_BINDING),
        eUniformBlockDataSize = GLenum(GL_UNIFORM_BLOCK_DATA_SIZE),
        eUniformBlockNameLength = GLenum(GL_UNIFORM_BLOCK_NAME_LENGTH),
        eUniformBlockActiveUniforms = GLenum(GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS),
        eUniformBlockActiveUniformIndices = GLenum(GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES),
        eUniformBlockReferencedByVertexShader = GLenum(GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER),
        eUniformBlockReferencedByGeometryShader = GLenum(GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER),
        eUniformBlockReferencedByFragmentShader = GLenum(GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER),
        eUniformBlockReferencedByComputeShader = GLenum(GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER),
    };
    enum class QueryObjectParameterName : GLenum {
        eQueryTarget = GLenum(GL_QUERY_TARGET),
        eQueryResult = GLenum(GL_QUERY_RESULT),
        eQueryResultAvailable = GLenum(GL_QUERY_RESULT_AVAILABLE),
        eQueryResultNoWait = GLenum(GL_QUERY_RESULT_NO_WAIT),
    };
    enum class VertexArrayPName : GLenum {
        eVertexAttribRelativeOffset = GLenum(GL_VERTEX_ATTRIB_RELATIVE_OFFSET),
        eVertexAttribArrayEnabled = GLenum(GL_VERTEX_ATTRIB_ARRAY_ENABLED),
        eVertexAttribArraySize = GLenum(GL_VERTEX_ATTRIB_ARRAY_SIZE),
        eVertexAttribArrayStride = GLenum(GL_VERTEX_ATTRIB_ARRAY_STRIDE),
        eVertexAttribArrayType = GLenum(GL_VERTEX_ATTRIB_ARRAY_TYPE),
        eVertexAttribArrayLong = GLenum(GL_VERTEX_ATTRIB_ARRAY_LONG),
        eVertexAttribArrayNormalized = GLenum(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED),
        eVertexAttribArrayInteger = GLenum(GL_VERTEX_ATTRIB_ARRAY_INTEGER),
        eVertexAttribArrayDivisor = GLenum(GL_VERTEX_ATTRIB_ARRAY_DIVISOR),
    };
    enum class ProgramPropertyARB : GLenum {
        eComputeWorkGroupSize = GLenum(GL_COMPUTE_WORK_GROUP_SIZE),
        eProgramBinaryLength = GLenum(GL_PROGRAM_BINARY_LENGTH),
        eGeometryVerticesOut = GLenum(GL_GEOMETRY_VERTICES_OUT),
        eGeometryInputType = GLenum(GL_GEOMETRY_INPUT_TYPE),
        eGeometryOutputType = GLenum(GL_GEOMETRY_OUTPUT_TYPE),
        eActiveUniformBlockMaxNameLength = GLenum(GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH),
        eActiveUniformBlocks = GLenum(GL_ACTIVE_UNIFORM_BLOCKS),
        eDeleteStatus = GLenum(GL_DELETE_STATUS),
        eLinkStatus = GLenum(GL_LINK_STATUS),
        eValidateStatus = GLenum(GL_VALIDATE_STATUS),
        eInfoLogLength = GLenum(GL_INFO_LOG_LENGTH),
        eAttachedShaders = GLenum(GL_ATTACHED_SHADERS),
        eActiveUniforms = GLenum(GL_ACTIVE_UNIFORMS),
        eActiveUniformMaxLength = GLenum(GL_ACTIVE_UNIFORM_MAX_LENGTH),
        eActiveAttributes = GLenum(GL_ACTIVE_ATTRIBUTES),
        eActiveAttributeMaxLength = GLenum(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH),
        eTransformFeedbackVaryingMaxLength = GLenum(GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH),
        eTransformFeedbackBufferMode = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_MODE),
        eTransformFeedbackVaryings = GLenum(GL_TRANSFORM_FEEDBACK_VARYINGS),
        eActiveAtomicCounterBuffers = GLenum(GL_ACTIVE_ATOMIC_COUNTER_BUFFERS),
    };
    enum class PipelineParameterName : GLenum {
        eActiveProgram = GLenum(GL_ACTIVE_PROGRAM),
        eFragmentShader = GLenum(GL_FRAGMENT_SHADER),
        eVertexShader = GLenum(GL_VERTEX_SHADER),
        eInfoLogLength = GLenum(GL_INFO_LOG_LENGTH),
        eGeometryShader = GLenum(GL_GEOMETRY_SHADER),
        eTessEvaluationShader = GLenum(GL_TESS_EVALUATION_SHADER),
        eTessControlShader = GLenum(GL_TESS_CONTROL_SHADER),
    };
    enum class ProgramStagePName : GLenum {
        eActiveSubroutines = GLenum(GL_ACTIVE_SUBROUTINES),
        eActiveSubroutineUniforms = GLenum(GL_ACTIVE_SUBROUTINE_UNIFORMS),
        eActiveSubroutineUniformLocations = GLenum(GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS),
        eActiveSubroutineMaxLength = GLenum(GL_ACTIVE_SUBROUTINE_MAX_LENGTH),
        eActiveSubroutineUniformMaxLength = GLenum(GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH),
    };
    enum class ProgramParameterPName : GLenum {
        eProgramBinaryRetrievableHint = GLenum(GL_PROGRAM_BINARY_RETRIEVABLE_HINT),
        eProgramSeparable = GLenum(GL_PROGRAM_SEPARABLE),
    };
    enum class DebugSource : GLenum {
        eDontCare = GLenum(GL_DONT_CARE),
        eDebugSourceApi = GLenum(GL_DEBUG_SOURCE_API),
        eDebugSourceWindowSystem = GLenum(GL_DEBUG_SOURCE_WINDOW_SYSTEM),
        eDebugSourceShaderCompiler = GLenum(GL_DEBUG_SOURCE_SHADER_COMPILER),
        eDebugSourceThirdParty = GLenum(GL_DEBUG_SOURCE_THIRD_PARTY),
        eDebugSourceApplication = GLenum(GL_DEBUG_SOURCE_APPLICATION),
        eDebugSourceOther = GLenum(GL_DEBUG_SOURCE_OTHER),
    };
    enum class GetFramebufferParameter : GLenum {
        eDoublebuffer = GLenum(GL_DOUBLEBUFFER),
        eStereo = GLenum(GL_STEREO),
        eSampleBuffers = GLenum(GL_SAMPLE_BUFFERS),
        eSamples = GLenum(GL_SAMPLES),
        eImplementationColorReadType = GLenum(GL_IMPLEMENTATION_COLOR_READ_TYPE),
        eImplementationColorReadFormat = GLenum(GL_IMPLEMENTATION_COLOR_READ_FORMAT),
        eFramebufferDefaultWidth = GLenum(GL_FRAMEBUFFER_DEFAULT_WIDTH),
        eFramebufferDefaultHeight = GLenum(GL_FRAMEBUFFER_DEFAULT_HEIGHT),
        eFramebufferDefaultLayers = GLenum(GL_FRAMEBUFFER_DEFAULT_LAYERS),
        eFramebufferDefaultSamples = GLenum(GL_FRAMEBUFFER_DEFAULT_SAMPLES),
        eFramebufferDefaultFixedSampleLocations = GLenum(GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS),
    };
    enum class ShaderType : GLenum {
        eFragmentShader = GLenum(GL_FRAGMENT_SHADER),
        eVertexShader = GLenum(GL_VERTEX_SHADER),
        eGeometryShader = GLenum(GL_GEOMETRY_SHADER),
        eTessEvaluationShader = GLenum(GL_TESS_EVALUATION_SHADER),
        eTessControlShader = GLenum(GL_TESS_CONTROL_SHADER),
        eComputeShader = GLenum(GL_COMPUTE_SHADER),
    };
    enum class IndexFunctionEXT : GLenum {
        eNever = GLenum(GL_NEVER),
        eLess = GLenum(GL_LESS),
        eEqual = GLenum(GL_EQUAL),
        eLequal = GLenum(GL_LEQUAL),
        eGreater = GLenum(GL_GREATER),
        eNotequal = GLenum(GL_NOTEQUAL),
        eGequal = GLenum(GL_GEQUAL),
        eAlways = GLenum(GL_ALWAYS),
    };
    enum class QueryParameterName : GLenum {
        eQueryCounterBits = GLenum(GL_QUERY_COUNTER_BITS),
        eCurrentQuery = GLenum(GL_CURRENT_QUERY),
    };
    enum class ReplacementCodeTypeSUN : GLenum {
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
    };
    enum class FogPointerTypeEXT : GLenum {
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class MatrixMode : GLenum {
        eTexture = GLenum(GL_TEXTURE),
    };
    enum class ColorTableTargetSGI : GLenum {
        eColorTable = GLenum(GL_COLOR_TABLE),
        ePostConvolutionColorTable = GLenum(GL_POST_CONVOLUTION_COLOR_TABLE),
        ePostColorMatrixColorTable = GLenum(GL_POST_COLOR_MATRIX_COLOR_TABLE),
        eProxyColorTable = GLenum(GL_PROXY_COLOR_TABLE),
        eProxyPostConvolutionColorTable = GLenum(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE),
        eProxyPostColorMatrixColorTable = GLenum(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE),
    };
    enum class ColorBuffer : GLenum {
        eNone = GLenum(GL_NONE),
        eFrontLeft = GLenum(GL_FRONT_LEFT),
        eFrontRight = GLenum(GL_FRONT_RIGHT),
        eBackLeft = GLenum(GL_BACK_LEFT),
        eBackRight = GLenum(GL_BACK_RIGHT),
        eFront = GLenum(GL_FRONT),
        eBack = GLenum(GL_BACK),
        eLeft = GLenum(GL_LEFT),
        eRight = GLenum(GL_RIGHT),
        eFrontAndBack = GLenum(GL_FRONT_AND_BACK),
        eColorAttachment0 = GLenum(GL_COLOR_ATTACHMENT0),
        eColorAttachment1 = GLenum(GL_COLOR_ATTACHMENT1),
        eColorAttachment2 = GLenum(GL_COLOR_ATTACHMENT2),
        eColorAttachment3 = GLenum(GL_COLOR_ATTACHMENT3),
        eColorAttachment4 = GLenum(GL_COLOR_ATTACHMENT4),
        eColorAttachment5 = GLenum(GL_COLOR_ATTACHMENT5),
        eColorAttachment6 = GLenum(GL_COLOR_ATTACHMENT6),
        eColorAttachment7 = GLenum(GL_COLOR_ATTACHMENT7),
        eColorAttachment8 = GLenum(GL_COLOR_ATTACHMENT8),
        eColorAttachment9 = GLenum(GL_COLOR_ATTACHMENT9),
        eColorAttachment10 = GLenum(GL_COLOR_ATTACHMENT10),
        eColorAttachment11 = GLenum(GL_COLOR_ATTACHMENT11),
        eColorAttachment12 = GLenum(GL_COLOR_ATTACHMENT12),
        eColorAttachment13 = GLenum(GL_COLOR_ATTACHMENT13),
        eColorAttachment14 = GLenum(GL_COLOR_ATTACHMENT14),
        eColorAttachment15 = GLenum(GL_COLOR_ATTACHMENT15),
        eColorAttachment16 = GLenum(GL_COLOR_ATTACHMENT16),
        eColorAttachment17 = GLenum(GL_COLOR_ATTACHMENT17),
        eColorAttachment18 = GLenum(GL_COLOR_ATTACHMENT18),
        eColorAttachment19 = GLenum(GL_COLOR_ATTACHMENT19),
        eColorAttachment20 = GLenum(GL_COLOR_ATTACHMENT20),
        eColorAttachment21 = GLenum(GL_COLOR_ATTACHMENT21),
        eColorAttachment22 = GLenum(GL_COLOR_ATTACHMENT22),
        eColorAttachment23 = GLenum(GL_COLOR_ATTACHMENT23),
        eColorAttachment24 = GLenum(GL_COLOR_ATTACHMENT24),
        eColorAttachment25 = GLenum(GL_COLOR_ATTACHMENT25),
        eColorAttachment26 = GLenum(GL_COLOR_ATTACHMENT26),
        eColorAttachment27 = GLenum(GL_COLOR_ATTACHMENT27),
        eColorAttachment28 = GLenum(GL_COLOR_ATTACHMENT28),
        eColorAttachment29 = GLenum(GL_COLOR_ATTACHMENT29),
        eColorAttachment30 = GLenum(GL_COLOR_ATTACHMENT30),
        eColorAttachment31 = GLenum(GL_COLOR_ATTACHMENT31),
    };
    enum class VertexAttribIType : GLenum {
        eByte = GLenum(GL_BYTE),
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eShort = GLenum(GL_SHORT),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
    };
    enum class ListNameType : GLenum {
        eByte = GLenum(GL_BYTE),
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eShort = GLenum(GL_SHORT),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eFloat = GLenum(GL_FLOAT),
    };
    enum class TextureUnit : GLenum {
        eTexture0 = GLenum(GL_TEXTURE0),
        eTexture1 = GLenum(GL_TEXTURE1),
        eTexture2 = GLenum(GL_TEXTURE2),
        eTexture3 = GLenum(GL_TEXTURE3),
        eTexture4 = GLenum(GL_TEXTURE4),
        eTexture5 = GLenum(GL_TEXTURE5),
        eTexture6 = GLenum(GL_TEXTURE6),
        eTexture7 = GLenum(GL_TEXTURE7),
        eTexture8 = GLenum(GL_TEXTURE8),
        eTexture9 = GLenum(GL_TEXTURE9),
        eTexture10 = GLenum(GL_TEXTURE10),
        eTexture11 = GLenum(GL_TEXTURE11),
        eTexture12 = GLenum(GL_TEXTURE12),
        eTexture13 = GLenum(GL_TEXTURE13),
        eTexture14 = GLenum(GL_TEXTURE14),
        eTexture15 = GLenum(GL_TEXTURE15),
        eTexture16 = GLenum(GL_TEXTURE16),
        eTexture17 = GLenum(GL_TEXTURE17),
        eTexture18 = GLenum(GL_TEXTURE18),
        eTexture19 = GLenum(GL_TEXTURE19),
        eTexture20 = GLenum(GL_TEXTURE20),
        eTexture21 = GLenum(GL_TEXTURE21),
        eTexture22 = GLenum(GL_TEXTURE22),
        eTexture23 = GLenum(GL_TEXTURE23),
        eTexture24 = GLenum(GL_TEXTURE24),
        eTexture25 = GLenum(GL_TEXTURE25),
        eTexture26 = GLenum(GL_TEXTURE26),
        eTexture27 = GLenum(GL_TEXTURE27),
        eTexture28 = GLenum(GL_TEXTURE28),
        eTexture29 = GLenum(GL_TEXTURE29),
        eTexture30 = GLenum(GL_TEXTURE30),
        eTexture31 = GLenum(GL_TEXTURE31),
    };
    enum class PrimitiveType : GLenum {
        ePoints = GLenum(GL_POINTS),
        eLines = GLenum(GL_LINES),
        eLineLoop = GLenum(GL_LINE_LOOP),
        eLineStrip = GLenum(GL_LINE_STRIP),
        eTriangles = GLenum(GL_TRIANGLES),
        eTriangleStrip = GLenum(GL_TRIANGLE_STRIP),
        eTriangleFan = GLenum(GL_TRIANGLE_FAN),
        eQuads = GLenum(GL_QUADS),
        eLinesAdjacency = GLenum(GL_LINES_ADJACENCY),
        eLineStripAdjacency = GLenum(GL_LINE_STRIP_ADJACENCY),
        eTrianglesAdjacency = GLenum(GL_TRIANGLES_ADJACENCY),
        eTriangleStripAdjacency = GLenum(GL_TRIANGLE_STRIP_ADJACENCY),
        ePatches = GLenum(GL_PATCHES),
    };
    enum class DepthFunction : GLenum {
        eNever = GLenum(GL_NEVER),
        eLess = GLenum(GL_LESS),
        eEqual = GLenum(GL_EQUAL),
        eLequal = GLenum(GL_LEQUAL),
        eGreater = GLenum(GL_GREATER),
        eNotequal = GLenum(GL_NOTEQUAL),
        eGequal = GLenum(GL_GEQUAL),
        eAlways = GLenum(GL_ALWAYS),
    };
    enum class AlphaFunction : GLenum {
        eNever = GLenum(GL_NEVER),
        eLess = GLenum(GL_LESS),
        eEqual = GLenum(GL_EQUAL),
        eLequal = GLenum(GL_LEQUAL),
        eGreater = GLenum(GL_GREATER),
        eNotequal = GLenum(GL_NOTEQUAL),
        eGequal = GLenum(GL_GEQUAL),
        eAlways = GLenum(GL_ALWAYS),
    };
    enum class SizedInternalFormat : GLenum {
        eR3G3B2 = GLenum(GL_R3_G3_B2),
        eRgb4 = GLenum(GL_RGB4),
        eRgb5 = GLenum(GL_RGB5),
        eRgb8 = GLenum(GL_RGB8),
        eRgb10 = GLenum(GL_RGB10),
        eRgb12 = GLenum(GL_RGB12),
        eRgb16 = GLenum(GL_RGB16),
        eRgba2 = GLenum(GL_RGBA2),
        eRgba4 = GLenum(GL_RGBA4),
        eRgb5A1 = GLenum(GL_RGB5_A1),
        eRgba8 = GLenum(GL_RGBA8),
        eRgb10A2 = GLenum(GL_RGB10_A2),
        eRgba12 = GLenum(GL_RGBA12),
        eRgba16 = GLenum(GL_RGBA16),
        eDepthComponent16 = GLenum(GL_DEPTH_COMPONENT16),
        eDepthComponent24 = GLenum(GL_DEPTH_COMPONENT24),
        eDepthComponent32 = GLenum(GL_DEPTH_COMPONENT32),
        eR8 = GLenum(GL_R8),
        eR16 = GLenum(GL_R16),
        eRg8 = GLenum(GL_RG8),
        eRg16 = GLenum(GL_RG16),
        eR16f = GLenum(GL_R16F),
        eR32f = GLenum(GL_R32F),
        eRg16f = GLenum(GL_RG16F),
        eRg32f = GLenum(GL_RG32F),
        eR8i = GLenum(GL_R8I),
        eR8ui = GLenum(GL_R8UI),
        eR16i = GLenum(GL_R16I),
        eR16ui = GLenum(GL_R16UI),
        eR32i = GLenum(GL_R32I),
        eR32ui = GLenum(GL_R32UI),
        eRg8i = GLenum(GL_RG8I),
        eRg8ui = GLenum(GL_RG8UI),
        eRg16i = GLenum(GL_RG16I),
        eRg16ui = GLenum(GL_RG16UI),
        eRg32i = GLenum(GL_RG32I),
        eRg32ui = GLenum(GL_RG32UI),
        eRgba32f = GLenum(GL_RGBA32F),
        eRgb32f = GLenum(GL_RGB32F),
        eRgba16f = GLenum(GL_RGBA16F),
        eRgb16f = GLenum(GL_RGB16F),
        eDepth24Stencil8 = GLenum(GL_DEPTH24_STENCIL8),
        eR11fG11fB10f = GLenum(GL_R11F_G11F_B10F),
        eRgb9E5 = GLenum(GL_RGB9_E5),
        eSrgb8 = GLenum(GL_SRGB8),
        eSrgb8Alpha8 = GLenum(GL_SRGB8_ALPHA8),
        eDepthComponent32f = GLenum(GL_DEPTH_COMPONENT32F),
        eDepth32fStencil8 = GLenum(GL_DEPTH32F_STENCIL8),
        eStencilIndex1 = GLenum(GL_STENCIL_INDEX1),
        eStencilIndex4 = GLenum(GL_STENCIL_INDEX4),
        eStencilIndex8 = GLenum(GL_STENCIL_INDEX8),
        eStencilIndex16 = GLenum(GL_STENCIL_INDEX16),
        eRgb565 = GLenum(GL_RGB565),
        eRgba32ui = GLenum(GL_RGBA32UI),
        eRgb32ui = GLenum(GL_RGB32UI),
        eRgba16ui = GLenum(GL_RGBA16UI),
        eRgb16ui = GLenum(GL_RGB16UI),
        eRgba8ui = GLenum(GL_RGBA8UI),
        eRgb8ui = GLenum(GL_RGB8UI),
        eRgba32i = GLenum(GL_RGBA32I),
        eRgb32i = GLenum(GL_RGB32I),
        eRgba16i = GLenum(GL_RGBA16I),
        eRgb16i = GLenum(GL_RGB16I),
        eRgba8i = GLenum(GL_RGBA8I),
        eRgb8i = GLenum(GL_RGB8I),
        eCompressedRedRgtc1 = GLenum(GL_COMPRESSED_RED_RGTC1),
        eCompressedSignedRedRgtc1 = GLenum(GL_COMPRESSED_SIGNED_RED_RGTC1),
        eCompressedRgRgtc2 = GLenum(GL_COMPRESSED_RG_RGTC2),
        eCompressedSignedRgRgtc2 = GLenum(GL_COMPRESSED_SIGNED_RG_RGTC2),
        eCompressedRgbaBptcUnorm = GLenum(GL_COMPRESSED_RGBA_BPTC_UNORM),
        eCompressedSrgbAlphaBptcUnorm = GLenum(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM),
        eCompressedRgbBptcSignedFloat = GLenum(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT),
        eCompressedRgbBptcUnsignedFloat = GLenum(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT),
        eR8Snorm = GLenum(GL_R8_SNORM),
        eRg8Snorm = GLenum(GL_RG8_SNORM),
        eRgb8Snorm = GLenum(GL_RGB8_SNORM),
        eRgba8Snorm = GLenum(GL_RGBA8_SNORM),
        eR16Snorm = GLenum(GL_R16_SNORM),
        eRg16Snorm = GLenum(GL_RG16_SNORM),
        eRgb16Snorm = GLenum(GL_RGB16_SNORM),
        eRgba16Snorm = GLenum(GL_RGBA16_SNORM),
        eRgb10A2ui = GLenum(GL_RGB10_A2UI),
        eCompressedR11Eac = GLenum(GL_COMPRESSED_R11_EAC),
        eCompressedSignedR11Eac = GLenum(GL_COMPRESSED_SIGNED_R11_EAC),
        eCompressedRg11Eac = GLenum(GL_COMPRESSED_RG11_EAC),
        eCompressedSignedRg11Eac = GLenum(GL_COMPRESSED_SIGNED_RG11_EAC),
        eCompressedRgb8Etc2 = GLenum(GL_COMPRESSED_RGB8_ETC2),
        eCompressedSrgb8Etc2 = GLenum(GL_COMPRESSED_SRGB8_ETC2),
        eCompressedRgb8PunchthroughAlpha1Etc2 = GLenum(GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2),
        eCompressedSrgb8PunchthroughAlpha1Etc2 = GLenum(GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2),
        eCompressedRgba8Etc2Eac = GLenum(GL_COMPRESSED_RGBA8_ETC2_EAC),
        eCompressedSrgb8Alpha8Etc2Eac = GLenum(GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC),
    };
    enum class EnableCap : GLenum {
        eLineSmooth = GLenum(GL_LINE_SMOOTH),
        ePolygonSmooth = GLenum(GL_POLYGON_SMOOTH),
        eCullFace = GLenum(GL_CULL_FACE),
        eDepthTest = GLenum(GL_DEPTH_TEST),
        eStencilTest = GLenum(GL_STENCIL_TEST),
        eDither = GLenum(GL_DITHER),
        eBlend = GLenum(GL_BLEND),
        eColorLogicOp = GLenum(GL_COLOR_LOGIC_OP),
        eScissorTest = GLenum(GL_SCISSOR_TEST),
        eTexture1d = GLenum(GL_TEXTURE_1D),
        eTexture2d = GLenum(GL_TEXTURE_2D),
        ePolygonOffsetPoint = GLenum(GL_POLYGON_OFFSET_POINT),
        ePolygonOffsetLine = GLenum(GL_POLYGON_OFFSET_LINE),
        eClipDistance0 = GLenum(GL_CLIP_DISTANCE0),
        eClipDistance1 = GLenum(GL_CLIP_DISTANCE1),
        eClipDistance2 = GLenum(GL_CLIP_DISTANCE2),
        eClipDistance3 = GLenum(GL_CLIP_DISTANCE3),
        eClipDistance4 = GLenum(GL_CLIP_DISTANCE4),
        eClipDistance5 = GLenum(GL_CLIP_DISTANCE5),
        eClipDistance6 = GLenum(GL_CLIP_DISTANCE6),
        eClipDistance7 = GLenum(GL_CLIP_DISTANCE7),
        ePolygonOffsetFill = GLenum(GL_POLYGON_OFFSET_FILL),
        eVertexArray = GLenum(GL_VERTEX_ARRAY),
        eMultisample = GLenum(GL_MULTISAMPLE),
        eSampleAlphaToCoverage = GLenum(GL_SAMPLE_ALPHA_TO_COVERAGE),
        eSampleAlphaToOne = GLenum(GL_SAMPLE_ALPHA_TO_ONE),
        eSampleCoverage = GLenum(GL_SAMPLE_COVERAGE),
        eColorTable = GLenum(GL_COLOR_TABLE),
        ePostConvolutionColorTable = GLenum(GL_POST_CONVOLUTION_COLOR_TABLE),
        ePostColorMatrixColorTable = GLenum(GL_POST_COLOR_MATRIX_COLOR_TABLE),
        eDebugOutputSynchronous = GLenum(GL_DEBUG_OUTPUT_SYNCHRONOUS),
        eTextureRectangle = GLenum(GL_TEXTURE_RECTANGLE),
        eTextureCubeMap = GLenum(GL_TEXTURE_CUBE_MAP),
        eProgramPointSize = GLenum(GL_PROGRAM_POINT_SIZE),
        eDepthClamp = GLenum(GL_DEPTH_CLAMP),
        eTextureCubeMapSeamless = GLenum(GL_TEXTURE_CUBE_MAP_SEAMLESS),
        eSampleShading = GLenum(GL_SAMPLE_SHADING),
        eRasterizerDiscard = GLenum(GL_RASTERIZER_DISCARD),
        ePrimitiveRestartFixedIndex = GLenum(GL_PRIMITIVE_RESTART_FIXED_INDEX),
        eFramebufferSrgb = GLenum(GL_FRAMEBUFFER_SRGB),
        eSampleMask = GLenum(GL_SAMPLE_MASK),
        ePrimitiveRestart = GLenum(GL_PRIMITIVE_RESTART),
        eDebugOutput = GLenum(GL_DEBUG_OUTPUT),
    };
    enum class CombinerComponentUsageNV : GLenum {
        eBlue = GLenum(GL_BLUE),
        eAlpha = GLenum(GL_ALPHA),
        eRgb = GLenum(GL_RGB),
    };
    enum class FramebufferParameterName : GLenum {
        eFramebufferDefaultWidth = GLenum(GL_FRAMEBUFFER_DEFAULT_WIDTH),
        eFramebufferDefaultHeight = GLenum(GL_FRAMEBUFFER_DEFAULT_HEIGHT),
        eFramebufferDefaultLayers = GLenum(GL_FRAMEBUFFER_DEFAULT_LAYERS),
        eFramebufferDefaultSamples = GLenum(GL_FRAMEBUFFER_DEFAULT_SAMPLES),
        eFramebufferDefaultFixedSampleLocations = GLenum(GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS),
    };
    enum class PathFontStyle : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class FragmentShaderTextureSourceATI : GLenum {
        eTexture0 = GLenum(GL_TEXTURE0),
        eTexture1 = GLenum(GL_TEXTURE1),
        eTexture2 = GLenum(GL_TEXTURE2),
        eTexture3 = GLenum(GL_TEXTURE3),
        eTexture4 = GLenum(GL_TEXTURE4),
        eTexture5 = GLenum(GL_TEXTURE5),
        eTexture6 = GLenum(GL_TEXTURE6),
        eTexture7 = GLenum(GL_TEXTURE7),
        eTexture8 = GLenum(GL_TEXTURE8),
        eTexture9 = GLenum(GL_TEXTURE9),
        eTexture10 = GLenum(GL_TEXTURE10),
        eTexture11 = GLenum(GL_TEXTURE11),
        eTexture12 = GLenum(GL_TEXTURE12),
        eTexture13 = GLenum(GL_TEXTURE13),
        eTexture14 = GLenum(GL_TEXTURE14),
        eTexture15 = GLenum(GL_TEXTURE15),
        eTexture16 = GLenum(GL_TEXTURE16),
        eTexture17 = GLenum(GL_TEXTURE17),
        eTexture18 = GLenum(GL_TEXTURE18),
        eTexture19 = GLenum(GL_TEXTURE19),
        eTexture20 = GLenum(GL_TEXTURE20),
        eTexture21 = GLenum(GL_TEXTURE21),
        eTexture22 = GLenum(GL_TEXTURE22),
        eTexture23 = GLenum(GL_TEXTURE23),
        eTexture24 = GLenum(GL_TEXTURE24),
        eTexture25 = GLenum(GL_TEXTURE25),
        eTexture26 = GLenum(GL_TEXTURE26),
        eTexture27 = GLenum(GL_TEXTURE27),
        eTexture28 = GLenum(GL_TEXTURE28),
        eTexture29 = GLenum(GL_TEXTURE29),
        eTexture30 = GLenum(GL_TEXTURE30),
        eTexture31 = GLenum(GL_TEXTURE31),
    };
    enum class UniformType : GLenum {
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
        eFloatVec2 = GLenum(GL_FLOAT_VEC2),
        eFloatVec3 = GLenum(GL_FLOAT_VEC3),
        eFloatVec4 = GLenum(GL_FLOAT_VEC4),
        eIntVec2 = GLenum(GL_INT_VEC2),
        eIntVec3 = GLenum(GL_INT_VEC3),
        eIntVec4 = GLenum(GL_INT_VEC4),
        eBool = GLenum(GL_BOOL),
        eBoolVec2 = GLenum(GL_BOOL_VEC2),
        eBoolVec3 = GLenum(GL_BOOL_VEC3),
        eBoolVec4 = GLenum(GL_BOOL_VEC4),
        eFloatMat2 = GLenum(GL_FLOAT_MAT2),
        eFloatMat3 = GLenum(GL_FLOAT_MAT3),
        eFloatMat4 = GLenum(GL_FLOAT_MAT4),
        eSampler1d = GLenum(GL_SAMPLER_1D),
        eSampler2d = GLenum(GL_SAMPLER_2D),
        eSampler3d = GLenum(GL_SAMPLER_3D),
        eSamplerCube = GLenum(GL_SAMPLER_CUBE),
        eSampler1dShadow = GLenum(GL_SAMPLER_1D_SHADOW),
        eSampler2dShadow = GLenum(GL_SAMPLER_2D_SHADOW),
        eSampler2dRect = GLenum(GL_SAMPLER_2D_RECT),
        eSampler2dRectShadow = GLenum(GL_SAMPLER_2D_RECT_SHADOW),
        eFloatMat2x3 = GLenum(GL_FLOAT_MAT2x3),
        eFloatMat2x4 = GLenum(GL_FLOAT_MAT2x4),
        eFloatMat3x2 = GLenum(GL_FLOAT_MAT3x2),
        eFloatMat3x4 = GLenum(GL_FLOAT_MAT3x4),
        eFloatMat4x2 = GLenum(GL_FLOAT_MAT4x2),
        eFloatMat4x3 = GLenum(GL_FLOAT_MAT4x3),
        eSampler1dArray = GLenum(GL_SAMPLER_1D_ARRAY),
        eSampler2dArray = GLenum(GL_SAMPLER_2D_ARRAY),
        eSamplerBuffer = GLenum(GL_SAMPLER_BUFFER),
        eSampler1dArrayShadow = GLenum(GL_SAMPLER_1D_ARRAY_SHADOW),
        eSampler2dArrayShadow = GLenum(GL_SAMPLER_2D_ARRAY_SHADOW),
        eSamplerCubeShadow = GLenum(GL_SAMPLER_CUBE_SHADOW),
        eUnsignedIntVec2 = GLenum(GL_UNSIGNED_INT_VEC2),
        eUnsignedIntVec3 = GLenum(GL_UNSIGNED_INT_VEC3),
        eUnsignedIntVec4 = GLenum(GL_UNSIGNED_INT_VEC4),
        eIntSampler1d = GLenum(GL_INT_SAMPLER_1D),
        eIntSampler2d = GLenum(GL_INT_SAMPLER_2D),
        eIntSampler3d = GLenum(GL_INT_SAMPLER_3D),
        eIntSamplerCube = GLenum(GL_INT_SAMPLER_CUBE),
        eIntSampler2dRect = GLenum(GL_INT_SAMPLER_2D_RECT),
        eIntSampler1dArray = GLenum(GL_INT_SAMPLER_1D_ARRAY),
        eIntSampler2dArray = GLenum(GL_INT_SAMPLER_2D_ARRAY),
        eIntSamplerBuffer = GLenum(GL_INT_SAMPLER_BUFFER),
        eUnsignedIntSampler1d = GLenum(GL_UNSIGNED_INT_SAMPLER_1D),
        eUnsignedIntSampler2d = GLenum(GL_UNSIGNED_INT_SAMPLER_2D),
        eUnsignedIntSampler3d = GLenum(GL_UNSIGNED_INT_SAMPLER_3D),
        eUnsignedIntSamplerCube = GLenum(GL_UNSIGNED_INT_SAMPLER_CUBE),
        eUnsignedIntSampler2dRect = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_RECT),
        eUnsignedIntSampler1dArray = GLenum(GL_UNSIGNED_INT_SAMPLER_1D_ARRAY),
        eUnsignedIntSampler2dArray = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_ARRAY),
        eUnsignedIntSamplerBuffer = GLenum(GL_UNSIGNED_INT_SAMPLER_BUFFER),
        eDoubleMat2 = GLenum(GL_DOUBLE_MAT2),
        eDoubleMat3 = GLenum(GL_DOUBLE_MAT3),
        eDoubleMat4 = GLenum(GL_DOUBLE_MAT4),
        eDoubleMat2x3 = GLenum(GL_DOUBLE_MAT2x3),
        eDoubleMat2x4 = GLenum(GL_DOUBLE_MAT2x4),
        eDoubleMat3x2 = GLenum(GL_DOUBLE_MAT3x2),
        eDoubleMat3x4 = GLenum(GL_DOUBLE_MAT3x4),
        eDoubleMat4x2 = GLenum(GL_DOUBLE_MAT4x2),
        eDoubleMat4x3 = GLenum(GL_DOUBLE_MAT4x3),
        eDoubleVec2 = GLenum(GL_DOUBLE_VEC2),
        eDoubleVec3 = GLenum(GL_DOUBLE_VEC3),
        eDoubleVec4 = GLenum(GL_DOUBLE_VEC4),
        eSamplerCubeMapArray = GLenum(GL_SAMPLER_CUBE_MAP_ARRAY),
        eSamplerCubeMapArrayShadow = GLenum(GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW),
        eIntSamplerCubeMapArray = GLenum(GL_INT_SAMPLER_CUBE_MAP_ARRAY),
        eUnsignedIntSamplerCubeMapArray = GLenum(GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY),
        eSampler2dMultisample = GLenum(GL_SAMPLER_2D_MULTISAMPLE),
        eIntSampler2dMultisample = GLenum(GL_INT_SAMPLER_2D_MULTISAMPLE),
        eUnsignedIntSampler2dMultisample = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE),
        eSampler2dMultisampleArray = GLenum(GL_SAMPLER_2D_MULTISAMPLE_ARRAY),
        eIntSampler2dMultisampleArray = GLenum(GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY),
        eUnsignedIntSampler2dMultisampleArray = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY),
    };
    enum class SeparableTarget : GLenum {
        eSeparable2d = GLenum(GL_SEPARABLE_2D),
    };
    enum class PathTransformType : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class DebugType : GLenum {
        eDontCare = GLenum(GL_DONT_CARE),
        eDebugTypeError = GLenum(GL_DEBUG_TYPE_ERROR),
        eDebugTypeDeprecatedBehavior = GLenum(GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR),
        eDebugTypeUndefinedBehavior = GLenum(GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR),
        eDebugTypePortability = GLenum(GL_DEBUG_TYPE_PORTABILITY),
        eDebugTypePerformance = GLenum(GL_DEBUG_TYPE_PERFORMANCE),
        eDebugTypeOther = GLenum(GL_DEBUG_TYPE_OTHER),
        eDebugTypeMarker = GLenum(GL_DEBUG_TYPE_MARKER),
        eDebugTypePushGroup = GLenum(GL_DEBUG_TYPE_PUSH_GROUP),
        eDebugTypePopGroup = GLenum(GL_DEBUG_TYPE_POP_GROUP),
    };
    enum class FrontFaceDirection : GLenum {
        eCw = GLenum(GL_CW),
        eCcw = GLenum(GL_CCW),
    };
    enum class VertexWeightPointerTypeEXT : GLenum {
        eFloat = GLenum(GL_FLOAT),
    };
    enum class CombinerBiasNV : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class ReadBufferMode : GLenum {
        eNone = GLenum(GL_NONE),
        eFrontLeft = GLenum(GL_FRONT_LEFT),
        eFrontRight = GLenum(GL_FRONT_RIGHT),
        eBackLeft = GLenum(GL_BACK_LEFT),
        eBackRight = GLenum(GL_BACK_RIGHT),
        eFront = GLenum(GL_FRONT),
        eBack = GLenum(GL_BACK),
        eLeft = GLenum(GL_LEFT),
        eRight = GLenum(GL_RIGHT),
        eColorAttachment0 = GLenum(GL_COLOR_ATTACHMENT0),
        eColorAttachment1 = GLenum(GL_COLOR_ATTACHMENT1),
        eColorAttachment2 = GLenum(GL_COLOR_ATTACHMENT2),
        eColorAttachment3 = GLenum(GL_COLOR_ATTACHMENT3),
        eColorAttachment4 = GLenum(GL_COLOR_ATTACHMENT4),
        eColorAttachment5 = GLenum(GL_COLOR_ATTACHMENT5),
        eColorAttachment6 = GLenum(GL_COLOR_ATTACHMENT6),
        eColorAttachment7 = GLenum(GL_COLOR_ATTACHMENT7),
        eColorAttachment8 = GLenum(GL_COLOR_ATTACHMENT8),
        eColorAttachment9 = GLenum(GL_COLOR_ATTACHMENT9),
        eColorAttachment10 = GLenum(GL_COLOR_ATTACHMENT10),
        eColorAttachment11 = GLenum(GL_COLOR_ATTACHMENT11),
        eColorAttachment12 = GLenum(GL_COLOR_ATTACHMENT12),
        eColorAttachment13 = GLenum(GL_COLOR_ATTACHMENT13),
        eColorAttachment14 = GLenum(GL_COLOR_ATTACHMENT14),
        eColorAttachment15 = GLenum(GL_COLOR_ATTACHMENT15),
    };
    enum class NormalPointerType : GLenum {
        eByte = GLenum(GL_BYTE),
        eShort = GLenum(GL_SHORT),
        eInt = GLenum(GL_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class FogCoordinatePointerType : GLenum {
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class LightEnvModeSGIX : GLenum {
        eReplace = GLenum(GL_REPLACE),
    };
    enum class SyncBehaviorFlags : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class BufferStorageTarget : GLenum {
        eArrayBuffer = GLenum(GL_ARRAY_BUFFER),
        eElementArrayBuffer = GLenum(GL_ELEMENT_ARRAY_BUFFER),
        ePixelPackBuffer = GLenum(GL_PIXEL_PACK_BUFFER),
        ePixelUnpackBuffer = GLenum(GL_PIXEL_UNPACK_BUFFER),
        eUniformBuffer = GLenum(GL_UNIFORM_BUFFER),
        eTextureBuffer = GLenum(GL_TEXTURE_BUFFER),
        eTransformFeedbackBuffer = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER),
        eCopyReadBuffer = GLenum(GL_COPY_READ_BUFFER),
        eCopyWriteBuffer = GLenum(GL_COPY_WRITE_BUFFER),
        eDrawIndirectBuffer = GLenum(GL_DRAW_INDIRECT_BUFFER),
        eShaderStorageBuffer = GLenum(GL_SHADER_STORAGE_BUFFER),
        eDispatchIndirectBuffer = GLenum(GL_DISPATCH_INDIRECT_BUFFER),
        eQueryBuffer = GLenum(GL_QUERY_BUFFER),
        eAtomicCounterBuffer = GLenum(GL_ATOMIC_COUNTER_BUFFER),
    };
    enum class TextureMinFilter : GLenum {
        eNearest = GLenum(GL_NEAREST),
        eLinear = GLenum(GL_LINEAR),
        eNearestMipmapNearest = GLenum(GL_NEAREST_MIPMAP_NEAREST),
        eLinearMipmapNearest = GLenum(GL_LINEAR_MIPMAP_NEAREST),
        eNearestMipmapLinear = GLenum(GL_NEAREST_MIPMAP_LINEAR),
        eLinearMipmapLinear = GLenum(GL_LINEAR_MIPMAP_LINEAR),
    };
    enum class MapTypeNV : GLenum {
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class VertexShaderWriteMaskEXT : GLenum {
        eFalse = GLenum(GL_FALSE),
        eTrue = GLenum(GL_TRUE),
    };
    enum class PixelStoreParameter : GLenum {
        eUnpackSwapBytes = GLenum(GL_UNPACK_SWAP_BYTES),
        eUnpackLsbFirst = GLenum(GL_UNPACK_LSB_FIRST),
        eUnpackRowLength = GLenum(GL_UNPACK_ROW_LENGTH),
        eUnpackSkipRows = GLenum(GL_UNPACK_SKIP_ROWS),
        eUnpackSkipPixels = GLenum(GL_UNPACK_SKIP_PIXELS),
        eUnpackAlignment = GLenum(GL_UNPACK_ALIGNMENT),
        ePackSwapBytes = GLenum(GL_PACK_SWAP_BYTES),
        ePackLsbFirst = GLenum(GL_PACK_LSB_FIRST),
        ePackRowLength = GLenum(GL_PACK_ROW_LENGTH),
        ePackSkipRows = GLenum(GL_PACK_SKIP_ROWS),
        ePackSkipPixels = GLenum(GL_PACK_SKIP_PIXELS),
        ePackAlignment = GLenum(GL_PACK_ALIGNMENT),
        ePackSkipImages = GLenum(GL_PACK_SKIP_IMAGES),
        ePackImageHeight = GLenum(GL_PACK_IMAGE_HEIGHT),
        eUnpackSkipImages = GLenum(GL_UNPACK_SKIP_IMAGES),
        eUnpackImageHeight = GLenum(GL_UNPACK_IMAGE_HEIGHT),
    };
    enum class InternalFormat : GLenum {
        eStencilIndex = GLenum(GL_STENCIL_INDEX),
        eDepthComponent = GLenum(GL_DEPTH_COMPONENT),
        eRed = GLenum(GL_RED),
        eRgb = GLenum(GL_RGB),
        eRgba = GLenum(GL_RGBA),
        eR3G3B2 = GLenum(GL_R3_G3_B2),
        eRgb4 = GLenum(GL_RGB4),
        eRgb5 = GLenum(GL_RGB5),
        eRgb8 = GLenum(GL_RGB8),
        eRgb10 = GLenum(GL_RGB10),
        eRgb12 = GLenum(GL_RGB12),
        eRgb16 = GLenum(GL_RGB16),
        eRgba2 = GLenum(GL_RGBA2),
        eRgba4 = GLenum(GL_RGBA4),
        eRgb5A1 = GLenum(GL_RGB5_A1),
        eRgba8 = GLenum(GL_RGBA8),
        eRgb10A2 = GLenum(GL_RGB10_A2),
        eRgba12 = GLenum(GL_RGBA12),
        eRgba16 = GLenum(GL_RGBA16),
        eDepthComponent16 = GLenum(GL_DEPTH_COMPONENT16),
        eDepthComponent24 = GLenum(GL_DEPTH_COMPONENT24),
        eDepthComponent32 = GLenum(GL_DEPTH_COMPONENT32),
        eCompressedRed = GLenum(GL_COMPRESSED_RED),
        eCompressedRg = GLenum(GL_COMPRESSED_RG),
        eRg = GLenum(GL_RG),
        eR8 = GLenum(GL_R8),
        eR16 = GLenum(GL_R16),
        eRg8 = GLenum(GL_RG8),
        eRg16 = GLenum(GL_RG16),
        eR16f = GLenum(GL_R16F),
        eR32f = GLenum(GL_R32F),
        eRg16f = GLenum(GL_RG16F),
        eRg32f = GLenum(GL_RG32F),
        eR8i = GLenum(GL_R8I),
        eR8ui = GLenum(GL_R8UI),
        eR16i = GLenum(GL_R16I),
        eR16ui = GLenum(GL_R16UI),
        eR32i = GLenum(GL_R32I),
        eR32ui = GLenum(GL_R32UI),
        eRg8i = GLenum(GL_RG8I),
        eRg8ui = GLenum(GL_RG8UI),
        eRg16i = GLenum(GL_RG16I),
        eRg16ui = GLenum(GL_RG16UI),
        eRg32i = GLenum(GL_RG32I),
        eRg32ui = GLenum(GL_RG32UI),
        eCompressedRgb = GLenum(GL_COMPRESSED_RGB),
        eCompressedRgba = GLenum(GL_COMPRESSED_RGBA),
        eDepthStencil = GLenum(GL_DEPTH_STENCIL),
        eRgba32f = GLenum(GL_RGBA32F),
        eRgb32f = GLenum(GL_RGB32F),
        eRgba16f = GLenum(GL_RGBA16F),
        eRgb16f = GLenum(GL_RGB16F),
        eDepth24Stencil8 = GLenum(GL_DEPTH24_STENCIL8),
        eR11fG11fB10f = GLenum(GL_R11F_G11F_B10F),
        eRgb9E5 = GLenum(GL_RGB9_E5),
        eSrgb = GLenum(GL_SRGB),
        eSrgb8 = GLenum(GL_SRGB8),
        eSrgbAlpha = GLenum(GL_SRGB_ALPHA),
        eSrgb8Alpha8 = GLenum(GL_SRGB8_ALPHA8),
        eCompressedSrgb = GLenum(GL_COMPRESSED_SRGB),
        eCompressedSrgbAlpha = GLenum(GL_COMPRESSED_SRGB_ALPHA),
        eDepthComponent32f = GLenum(GL_DEPTH_COMPONENT32F),
        eDepth32fStencil8 = GLenum(GL_DEPTH32F_STENCIL8),
        eStencilIndex1 = GLenum(GL_STENCIL_INDEX1),
        eStencilIndex4 = GLenum(GL_STENCIL_INDEX4),
        eStencilIndex8 = GLenum(GL_STENCIL_INDEX8),
        eStencilIndex16 = GLenum(GL_STENCIL_INDEX16),
        eRgb565 = GLenum(GL_RGB565),
        eRgba32ui = GLenum(GL_RGBA32UI),
        eRgb32ui = GLenum(GL_RGB32UI),
        eRgba16ui = GLenum(GL_RGBA16UI),
        eRgb16ui = GLenum(GL_RGB16UI),
        eRgba8ui = GLenum(GL_RGBA8UI),
        eRgb8ui = GLenum(GL_RGB8UI),
        eRgba32i = GLenum(GL_RGBA32I),
        eRgb32i = GLenum(GL_RGB32I),
        eRgba16i = GLenum(GL_RGBA16I),
        eRgb16i = GLenum(GL_RGB16I),
        eRgba8i = GLenum(GL_RGBA8I),
        eRgb8i = GLenum(GL_RGB8I),
        eCompressedRedRgtc1 = GLenum(GL_COMPRESSED_RED_RGTC1),
        eCompressedSignedRedRgtc1 = GLenum(GL_COMPRESSED_SIGNED_RED_RGTC1),
        eCompressedRgRgtc2 = GLenum(GL_COMPRESSED_RG_RGTC2),
        eCompressedSignedRgRgtc2 = GLenum(GL_COMPRESSED_SIGNED_RG_RGTC2),
        eCompressedRgbaBptcUnorm = GLenum(GL_COMPRESSED_RGBA_BPTC_UNORM),
        eCompressedSrgbAlphaBptcUnorm = GLenum(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM),
        eCompressedRgbBptcSignedFloat = GLenum(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT),
        eCompressedRgbBptcUnsignedFloat = GLenum(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT),
        eR8Snorm = GLenum(GL_R8_SNORM),
        eRg8Snorm = GLenum(GL_RG8_SNORM),
        eRgb8Snorm = GLenum(GL_RGB8_SNORM),
        eRgba8Snorm = GLenum(GL_RGBA8_SNORM),
        eR16Snorm = GLenum(GL_R16_SNORM),
        eRg16Snorm = GLenum(GL_RG16_SNORM),
        eRgb16Snorm = GLenum(GL_RGB16_SNORM),
        eRgba16Snorm = GLenum(GL_RGBA16_SNORM),
        eRgb10A2ui = GLenum(GL_RGB10_A2UI),
        eCompressedR11Eac = GLenum(GL_COMPRESSED_R11_EAC),
        eCompressedSignedR11Eac = GLenum(GL_COMPRESSED_SIGNED_R11_EAC),
        eCompressedRg11Eac = GLenum(GL_COMPRESSED_RG11_EAC),
        eCompressedSignedRg11Eac = GLenum(GL_COMPRESSED_SIGNED_RG11_EAC),
        eCompressedRgb8Etc2 = GLenum(GL_COMPRESSED_RGB8_ETC2),
        eCompressedSrgb8Etc2 = GLenum(GL_COMPRESSED_SRGB8_ETC2),
        eCompressedRgb8PunchthroughAlpha1Etc2 = GLenum(GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2),
        eCompressedSrgb8PunchthroughAlpha1Etc2 = GLenum(GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2),
        eCompressedRgba8Etc2Eac = GLenum(GL_COMPRESSED_RGBA8_ETC2_EAC),
        eCompressedSrgb8Alpha8Etc2Eac = GLenum(GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC),
    };
    enum class MinmaxTarget : GLenum {
        eMinmax = GLenum(GL_MINMAX),
    };
    enum class StencilFunction : GLenum {
        eNever = GLenum(GL_NEVER),
        eLess = GLenum(GL_LESS),
        eEqual = GLenum(GL_EQUAL),
        eLequal = GLenum(GL_LEQUAL),
        eGreater = GLenum(GL_GREATER),
        eNotequal = GLenum(GL_NOTEQUAL),
        eGequal = GLenum(GL_GEQUAL),
        eAlways = GLenum(GL_ALWAYS),
    };
    enum class TextureParameterName : GLenum {
        eTextureWidth = GLenum(GL_TEXTURE_WIDTH),
        eTextureHeight = GLenum(GL_TEXTURE_HEIGHT),
        eTextureInternalFormat = GLenum(GL_TEXTURE_INTERNAL_FORMAT),
        eTextureBorderColor = GLenum(GL_TEXTURE_BORDER_COLOR),
        eTextureMagFilter = GLenum(GL_TEXTURE_MAG_FILTER),
        eTextureMinFilter = GLenum(GL_TEXTURE_MIN_FILTER),
        eTextureWrapS = GLenum(GL_TEXTURE_WRAP_S),
        eTextureWrapT = GLenum(GL_TEXTURE_WRAP_T),
        eTextureRedSize = GLenum(GL_TEXTURE_RED_SIZE),
        eTextureGreenSize = GLenum(GL_TEXTURE_GREEN_SIZE),
        eTextureBlueSize = GLenum(GL_TEXTURE_BLUE_SIZE),
        eTextureAlphaSize = GLenum(GL_TEXTURE_ALPHA_SIZE),
        eTextureWrapR = GLenum(GL_TEXTURE_WRAP_R),
        eTextureMinLod = GLenum(GL_TEXTURE_MIN_LOD),
        eTextureMaxLod = GLenum(GL_TEXTURE_MAX_LOD),
        eTextureBaseLevel = GLenum(GL_TEXTURE_BASE_LEVEL),
        eTextureMaxLevel = GLenum(GL_TEXTURE_MAX_LEVEL),
        eTextureLodBias = GLenum(GL_TEXTURE_LOD_BIAS),
        eTextureCompareMode = GLenum(GL_TEXTURE_COMPARE_MODE),
        eTextureCompareFunc = GLenum(GL_TEXTURE_COMPARE_FUNC),
        eTextureSwizzleR = GLenum(GL_TEXTURE_SWIZZLE_R),
        eTextureSwizzleG = GLenum(GL_TEXTURE_SWIZZLE_G),
        eTextureSwizzleB = GLenum(GL_TEXTURE_SWIZZLE_B),
        eTextureSwizzleA = GLenum(GL_TEXTURE_SWIZZLE_A),
        eTextureSwizzleRgba = GLenum(GL_TEXTURE_SWIZZLE_RGBA),
        eDepthStencilTextureMode = GLenum(GL_DEPTH_STENCIL_TEXTURE_MODE),
    };
    enum class ProgramInterface : GLenum {
        eTransformFeedbackBuffer = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER),
        eUniform = GLenum(GL_UNIFORM),
        eUniformBlock = GLenum(GL_UNIFORM_BLOCK),
        eProgramInput = GLenum(GL_PROGRAM_INPUT),
        eProgramOutput = GLenum(GL_PROGRAM_OUTPUT),
        eBufferVariable = GLenum(GL_BUFFER_VARIABLE),
        eShaderStorageBlock = GLenum(GL_SHADER_STORAGE_BLOCK),
        eVertexSubroutine = GLenum(GL_VERTEX_SUBROUTINE),
        eTessControlSubroutine = GLenum(GL_TESS_CONTROL_SUBROUTINE),
        eTessEvaluationSubroutine = GLenum(GL_TESS_EVALUATION_SUBROUTINE),
        eGeometrySubroutine = GLenum(GL_GEOMETRY_SUBROUTINE),
        eFragmentSubroutine = GLenum(GL_FRAGMENT_SUBROUTINE),
        eComputeSubroutine = GLenum(GL_COMPUTE_SUBROUTINE),
        eVertexSubroutineUniform = GLenum(GL_VERTEX_SUBROUTINE_UNIFORM),
        eTessControlSubroutineUniform = GLenum(GL_TESS_CONTROL_SUBROUTINE_UNIFORM),
        eTessEvaluationSubroutineUniform = GLenum(GL_TESS_EVALUATION_SUBROUTINE_UNIFORM),
        eGeometrySubroutineUniform = GLenum(GL_GEOMETRY_SUBROUTINE_UNIFORM),
        eFragmentSubroutineUniform = GLenum(GL_FRAGMENT_SUBROUTINE_UNIFORM),
        eComputeSubroutineUniform = GLenum(GL_COMPUTE_SUBROUTINE_UNIFORM),
        eTransformFeedbackVarying = GLenum(GL_TRANSFORM_FEEDBACK_VARYING),
    };
    enum class GetPName : GLenum {
        ePointSize = GLenum(GL_POINT_SIZE),
        ePointSizeRange = GLenum(GL_POINT_SIZE_RANGE),
        eSmoothPointSizeRange = GLenum(GL_SMOOTH_POINT_SIZE_RANGE),
        ePointSizeGranularity = GLenum(GL_POINT_SIZE_GRANULARITY),
        eSmoothPointSizeGranularity = GLenum(GL_SMOOTH_POINT_SIZE_GRANULARITY),
        eLineSmooth = GLenum(GL_LINE_SMOOTH),
        eLineWidth = GLenum(GL_LINE_WIDTH),
        eLineWidthRange = GLenum(GL_LINE_WIDTH_RANGE),
        eSmoothLineWidthRange = GLenum(GL_SMOOTH_LINE_WIDTH_RANGE),
        eLineWidthGranularity = GLenum(GL_LINE_WIDTH_GRANULARITY),
        eSmoothLineWidthGranularity = GLenum(GL_SMOOTH_LINE_WIDTH_GRANULARITY),
        ePolygonMode = GLenum(GL_POLYGON_MODE),
        ePolygonSmooth = GLenum(GL_POLYGON_SMOOTH),
        eCullFace = GLenum(GL_CULL_FACE),
        eCullFaceMode = GLenum(GL_CULL_FACE_MODE),
        eFrontFace = GLenum(GL_FRONT_FACE),
        eDepthRange = GLenum(GL_DEPTH_RANGE),
        eDepthTest = GLenum(GL_DEPTH_TEST),
        eDepthWritemask = GLenum(GL_DEPTH_WRITEMASK),
        eDepthClearValue = GLenum(GL_DEPTH_CLEAR_VALUE),
        eDepthFunc = GLenum(GL_DEPTH_FUNC),
        eStencilTest = GLenum(GL_STENCIL_TEST),
        eStencilClearValue = GLenum(GL_STENCIL_CLEAR_VALUE),
        eStencilFunc = GLenum(GL_STENCIL_FUNC),
        eStencilValueMask = GLenum(GL_STENCIL_VALUE_MASK),
        eStencilFail = GLenum(GL_STENCIL_FAIL),
        eStencilPassDepthFail = GLenum(GL_STENCIL_PASS_DEPTH_FAIL),
        eStencilPassDepthPass = GLenum(GL_STENCIL_PASS_DEPTH_PASS),
        eStencilRef = GLenum(GL_STENCIL_REF),
        eStencilWritemask = GLenum(GL_STENCIL_WRITEMASK),
        eViewport = GLenum(GL_VIEWPORT),
        eDither = GLenum(GL_DITHER),
        eBlendDst = GLenum(GL_BLEND_DST),
        eBlendSrc = GLenum(GL_BLEND_SRC),
        eBlend = GLenum(GL_BLEND),
        eLogicOpMode = GLenum(GL_LOGIC_OP_MODE),
        eColorLogicOp = GLenum(GL_COLOR_LOGIC_OP),
        eDrawBuffer = GLenum(GL_DRAW_BUFFER),
        eReadBuffer = GLenum(GL_READ_BUFFER),
        eScissorBox = GLenum(GL_SCISSOR_BOX),
        eScissorTest = GLenum(GL_SCISSOR_TEST),
        eColorClearValue = GLenum(GL_COLOR_CLEAR_VALUE),
        eColorWritemask = GLenum(GL_COLOR_WRITEMASK),
        eDoublebuffer = GLenum(GL_DOUBLEBUFFER),
        eStereo = GLenum(GL_STEREO),
        eLineSmoothHint = GLenum(GL_LINE_SMOOTH_HINT),
        ePolygonSmoothHint = GLenum(GL_POLYGON_SMOOTH_HINT),
        eUnpackSwapBytes = GLenum(GL_UNPACK_SWAP_BYTES),
        eUnpackLsbFirst = GLenum(GL_UNPACK_LSB_FIRST),
        eUnpackRowLength = GLenum(GL_UNPACK_ROW_LENGTH),
        eUnpackSkipRows = GLenum(GL_UNPACK_SKIP_ROWS),
        eUnpackSkipPixels = GLenum(GL_UNPACK_SKIP_PIXELS),
        eUnpackAlignment = GLenum(GL_UNPACK_ALIGNMENT),
        ePackSwapBytes = GLenum(GL_PACK_SWAP_BYTES),
        ePackLsbFirst = GLenum(GL_PACK_LSB_FIRST),
        ePackRowLength = GLenum(GL_PACK_ROW_LENGTH),
        ePackSkipRows = GLenum(GL_PACK_SKIP_ROWS),
        ePackSkipPixels = GLenum(GL_PACK_SKIP_PIXELS),
        ePackAlignment = GLenum(GL_PACK_ALIGNMENT),
        eMaxClipDistances = GLenum(GL_MAX_CLIP_DISTANCES),
        eMaxTextureSize = GLenum(GL_MAX_TEXTURE_SIZE),
        eMaxViewportDims = GLenum(GL_MAX_VIEWPORT_DIMS),
        eSubpixelBits = GLenum(GL_SUBPIXEL_BITS),
        eTexture1d = GLenum(GL_TEXTURE_1D),
        eTexture2d = GLenum(GL_TEXTURE_2D),
        ePolygonOffsetUnits = GLenum(GL_POLYGON_OFFSET_UNITS),
        ePolygonOffsetPoint = GLenum(GL_POLYGON_OFFSET_POINT),
        ePolygonOffsetLine = GLenum(GL_POLYGON_OFFSET_LINE),
        eBlendColor = GLenum(GL_BLEND_COLOR),
        eBlendEquation = GLenum(GL_BLEND_EQUATION),
        eBlendEquationRgb = GLenum(GL_BLEND_EQUATION_RGB),
        ePolygonOffsetFill = GLenum(GL_POLYGON_OFFSET_FILL),
        ePolygonOffsetFactor = GLenum(GL_POLYGON_OFFSET_FACTOR),
        eTextureBinding1d = GLenum(GL_TEXTURE_BINDING_1D),
        eTextureBinding2d = GLenum(GL_TEXTURE_BINDING_2D),
        eTextureBinding3d = GLenum(GL_TEXTURE_BINDING_3D),
        ePackSkipImages = GLenum(GL_PACK_SKIP_IMAGES),
        ePackImageHeight = GLenum(GL_PACK_IMAGE_HEIGHT),
        eUnpackSkipImages = GLenum(GL_UNPACK_SKIP_IMAGES),
        eUnpackImageHeight = GLenum(GL_UNPACK_IMAGE_HEIGHT),
        eMax3dTextureSize = GLenum(GL_MAX_3D_TEXTURE_SIZE),
        eVertexArray = GLenum(GL_VERTEX_ARRAY),
        eSampleBuffers = GLenum(GL_SAMPLE_BUFFERS),
        eSamples = GLenum(GL_SAMPLES),
        eSampleCoverageValue = GLenum(GL_SAMPLE_COVERAGE_VALUE),
        eSampleCoverageInvert = GLenum(GL_SAMPLE_COVERAGE_INVERT),
        eBlendDstRgb = GLenum(GL_BLEND_DST_RGB),
        eBlendSrcRgb = GLenum(GL_BLEND_SRC_RGB),
        eBlendDstAlpha = GLenum(GL_BLEND_DST_ALPHA),
        eBlendSrcAlpha = GLenum(GL_BLEND_SRC_ALPHA),
        eMaxElementsVertices = GLenum(GL_MAX_ELEMENTS_VERTICES),
        eMaxElementsIndices = GLenum(GL_MAX_ELEMENTS_INDICES),
        ePointFadeThresholdSize = GLenum(GL_POINT_FADE_THRESHOLD_SIZE),
        eMajorVersion = GLenum(GL_MAJOR_VERSION),
        eMinorVersion = GLenum(GL_MINOR_VERSION),
        eNumExtensions = GLenum(GL_NUM_EXTENSIONS),
        eContextFlags = GLenum(GL_CONTEXT_FLAGS),
        eProgramPipelineBinding = GLenum(GL_PROGRAM_PIPELINE_BINDING),
        eMaxViewports = GLenum(GL_MAX_VIEWPORTS),
        eViewportSubpixelBits = GLenum(GL_VIEWPORT_SUBPIXEL_BITS),
        eViewportBoundsRange = GLenum(GL_VIEWPORT_BOUNDS_RANGE),
        eLayerProvokingVertex = GLenum(GL_LAYER_PROVOKING_VERTEX),
        eViewportIndexProvokingVertex = GLenum(GL_VIEWPORT_INDEX_PROVOKING_VERTEX),
        eMaxComputeUniformComponents = GLenum(GL_MAX_COMPUTE_UNIFORM_COMPONENTS),
        eMaxComputeAtomicCounterBuffers = GLenum(GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS),
        eMaxComputeAtomicCounters = GLenum(GL_MAX_COMPUTE_ATOMIC_COUNTERS),
        eMaxCombinedComputeUniformComponents = GLenum(GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS),
        eMaxDebugGroupStackDepth = GLenum(GL_MAX_DEBUG_GROUP_STACK_DEPTH),
        eDebugGroupStackDepth = GLenum(GL_DEBUG_GROUP_STACK_DEPTH),
        eMaxUniformLocations = GLenum(GL_MAX_UNIFORM_LOCATIONS),
        eVertexBindingDivisor = GLenum(GL_VERTEX_BINDING_DIVISOR),
        eVertexBindingOffset = GLenum(GL_VERTEX_BINDING_OFFSET),
        eVertexBindingStride = GLenum(GL_VERTEX_BINDING_STRIDE),
        eMaxVertexAttribRelativeOffset = GLenum(GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET),
        eMaxVertexAttribBindings = GLenum(GL_MAX_VERTEX_ATTRIB_BINDINGS),
        eMaxLabelLength = GLenum(GL_MAX_LABEL_LENGTH),
        eAliasedLineWidthRange = GLenum(GL_ALIASED_LINE_WIDTH_RANGE),
        eActiveTexture = GLenum(GL_ACTIVE_TEXTURE),
        eMaxRenderbufferSize = GLenum(GL_MAX_RENDERBUFFER_SIZE),
        eTextureCompressionHint = GLenum(GL_TEXTURE_COMPRESSION_HINT),
        eTextureBindingRectangle = GLenum(GL_TEXTURE_BINDING_RECTANGLE),
        eMaxRectangleTextureSize = GLenum(GL_MAX_RECTANGLE_TEXTURE_SIZE),
        eMaxTextureLodBias = GLenum(GL_MAX_TEXTURE_LOD_BIAS),
        eTextureBindingCubeMap = GLenum(GL_TEXTURE_BINDING_CUBE_MAP),
        eMaxCubeMapTextureSize = GLenum(GL_MAX_CUBE_MAP_TEXTURE_SIZE),
        eVertexArrayBinding = GLenum(GL_VERTEX_ARRAY_BINDING),
        eProgramPointSize = GLenum(GL_PROGRAM_POINT_SIZE),
        eNumCompressedTextureFormats = GLenum(GL_NUM_COMPRESSED_TEXTURE_FORMATS),
        eCompressedTextureFormats = GLenum(GL_COMPRESSED_TEXTURE_FORMATS),
        eNumProgramBinaryFormats = GLenum(GL_NUM_PROGRAM_BINARY_FORMATS),
        eProgramBinaryFormats = GLenum(GL_PROGRAM_BINARY_FORMATS),
        eStencilBackFunc = GLenum(GL_STENCIL_BACK_FUNC),
        eStencilBackFail = GLenum(GL_STENCIL_BACK_FAIL),
        eStencilBackPassDepthFail = GLenum(GL_STENCIL_BACK_PASS_DEPTH_FAIL),
        eStencilBackPassDepthPass = GLenum(GL_STENCIL_BACK_PASS_DEPTH_PASS),
        eMaxDrawBuffers = GLenum(GL_MAX_DRAW_BUFFERS),
        eBlendEquationAlpha = GLenum(GL_BLEND_EQUATION_ALPHA),
        eMaxVertexAttribs = GLenum(GL_MAX_VERTEX_ATTRIBS),
        eMaxTextureImageUnits = GLenum(GL_MAX_TEXTURE_IMAGE_UNITS),
        eArrayBufferBinding = GLenum(GL_ARRAY_BUFFER_BINDING),
        eElementArrayBufferBinding = GLenum(GL_ELEMENT_ARRAY_BUFFER_BINDING),
        ePixelPackBufferBinding = GLenum(GL_PIXEL_PACK_BUFFER_BINDING),
        ePixelUnpackBufferBinding = GLenum(GL_PIXEL_UNPACK_BUFFER_BINDING),
        eMaxDualSourceDrawBuffers = GLenum(GL_MAX_DUAL_SOURCE_DRAW_BUFFERS),
        eMaxArrayTextureLayers = GLenum(GL_MAX_ARRAY_TEXTURE_LAYERS),
        eMinProgramTexelOffset = GLenum(GL_MIN_PROGRAM_TEXEL_OFFSET),
        eMaxProgramTexelOffset = GLenum(GL_MAX_PROGRAM_TEXEL_OFFSET),
        eSamplerBinding = GLenum(GL_SAMPLER_BINDING),
        eUniformBufferBinding = GLenum(GL_UNIFORM_BUFFER_BINDING),
        eUniformBufferStart = GLenum(GL_UNIFORM_BUFFER_START),
        eUniformBufferSize = GLenum(GL_UNIFORM_BUFFER_SIZE),
        eMaxVertexUniformBlocks = GLenum(GL_MAX_VERTEX_UNIFORM_BLOCKS),
        eMaxGeometryUniformBlocks = GLenum(GL_MAX_GEOMETRY_UNIFORM_BLOCKS),
        eMaxFragmentUniformBlocks = GLenum(GL_MAX_FRAGMENT_UNIFORM_BLOCKS),
        eMaxCombinedUniformBlocks = GLenum(GL_MAX_COMBINED_UNIFORM_BLOCKS),
        eMaxUniformBufferBindings = GLenum(GL_MAX_UNIFORM_BUFFER_BINDINGS),
        eMaxUniformBlockSize = GLenum(GL_MAX_UNIFORM_BLOCK_SIZE),
        eMaxCombinedVertexUniformComponents = GLenum(GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS),
        eMaxCombinedGeometryUniformComponents = GLenum(GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS),
        eMaxCombinedFragmentUniformComponents = GLenum(GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS),
        eUniformBufferOffsetAlignment = GLenum(GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT),
        eMaxFragmentUniformComponents = GLenum(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS),
        eMaxVertexUniformComponents = GLenum(GL_MAX_VERTEX_UNIFORM_COMPONENTS),
        eMaxVaryingFloats = GLenum(GL_MAX_VARYING_FLOATS),
        eMaxVaryingComponents = GLenum(GL_MAX_VARYING_COMPONENTS),
        eMaxVertexTextureImageUnits = GLenum(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS),
        eMaxCombinedTextureImageUnits = GLenum(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS),
        eFragmentShaderDerivativeHint = GLenum(GL_FRAGMENT_SHADER_DERIVATIVE_HINT),
        eCurrentProgram = GLenum(GL_CURRENT_PROGRAM),
        eImplementationColorReadType = GLenum(GL_IMPLEMENTATION_COLOR_READ_TYPE),
        eImplementationColorReadFormat = GLenum(GL_IMPLEMENTATION_COLOR_READ_FORMAT),
        eTextureBinding1dArray = GLenum(GL_TEXTURE_BINDING_1D_ARRAY),
        eTextureBinding2dArray = GLenum(GL_TEXTURE_BINDING_2D_ARRAY),
        eMaxGeometryTextureImageUnits = GLenum(GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS),
        eMaxTextureBufferSize = GLenum(GL_MAX_TEXTURE_BUFFER_SIZE),
        eTextureBindingBuffer = GLenum(GL_TEXTURE_BINDING_BUFFER),
        eTransformFeedbackBufferStart = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_START),
        eTransformFeedbackBufferSize = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE),
        eTransformFeedbackBufferBinding = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING),
        eStencilBackRef = GLenum(GL_STENCIL_BACK_REF),
        eStencilBackValueMask = GLenum(GL_STENCIL_BACK_VALUE_MASK),
        eStencilBackWritemask = GLenum(GL_STENCIL_BACK_WRITEMASK),
        eDrawFramebufferBinding = GLenum(GL_DRAW_FRAMEBUFFER_BINDING),
        eRenderbufferBinding = GLenum(GL_RENDERBUFFER_BINDING),
        eReadFramebufferBinding = GLenum(GL_READ_FRAMEBUFFER_BINDING),
        eMaxColorAttachments = GLenum(GL_MAX_COLOR_ATTACHMENTS),
        eMaxElementIndex = GLenum(GL_MAX_ELEMENT_INDEX),
        eMaxGeometryUniformComponents = GLenum(GL_MAX_GEOMETRY_UNIFORM_COMPONENTS),
        eShaderBinaryFormats = GLenum(GL_SHADER_BINARY_FORMATS),
        eNumShaderBinaryFormats = GLenum(GL_NUM_SHADER_BINARY_FORMATS),
        eShaderCompiler = GLenum(GL_SHADER_COMPILER),
        eMaxVertexUniformVectors = GLenum(GL_MAX_VERTEX_UNIFORM_VECTORS),
        eMaxVaryingVectors = GLenum(GL_MAX_VARYING_VECTORS),
        eMaxFragmentUniformVectors = GLenum(GL_MAX_FRAGMENT_UNIFORM_VECTORS),
        eTimestamp = GLenum(GL_TIMESTAMP),
        eProvokingVertex = GLenum(GL_PROVOKING_VERTEX),
        eMaxSampleMaskWords = GLenum(GL_MAX_SAMPLE_MASK_WORDS),
        eMaxTessControlUniformBlocks = GLenum(GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS),
        eMaxTessEvaluationUniformBlocks = GLenum(GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS),
        ePrimitiveRestartIndex = GLenum(GL_PRIMITIVE_RESTART_INDEX),
        eMinMapBufferAlignment = GLenum(GL_MIN_MAP_BUFFER_ALIGNMENT),
        eShaderStorageBufferBinding = GLenum(GL_SHADER_STORAGE_BUFFER_BINDING),
        eShaderStorageBufferStart = GLenum(GL_SHADER_STORAGE_BUFFER_START),
        eShaderStorageBufferSize = GLenum(GL_SHADER_STORAGE_BUFFER_SIZE),
        eMaxVertexShaderStorageBlocks = GLenum(GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS),
        eMaxGeometryShaderStorageBlocks = GLenum(GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS),
        eMaxTessControlShaderStorageBlocks = GLenum(GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS),
        eMaxTessEvaluationShaderStorageBlocks = GLenum(GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS),
        eMaxFragmentShaderStorageBlocks = GLenum(GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS),
        eMaxComputeShaderStorageBlocks = GLenum(GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS),
        eMaxCombinedShaderStorageBlocks = GLenum(GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS),
        eMaxShaderStorageBufferBindings = GLenum(GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS),
        eShaderStorageBufferOffsetAlignment = GLenum(GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT),
        eMaxComputeWorkGroupInvocations = GLenum(GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS),
        eDispatchIndirectBufferBinding = GLenum(GL_DISPATCH_INDIRECT_BUFFER_BINDING),
        eTextureBinding2dMultisample = GLenum(GL_TEXTURE_BINDING_2D_MULTISAMPLE),
        eTextureBinding2dMultisampleArray = GLenum(GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY),
        eMaxColorTextureSamples = GLenum(GL_MAX_COLOR_TEXTURE_SAMPLES),
        eMaxDepthTextureSamples = GLenum(GL_MAX_DEPTH_TEXTURE_SAMPLES),
        eMaxIntegerSamples = GLenum(GL_MAX_INTEGER_SAMPLES),
        eMaxServerWaitTimeout = GLenum(GL_MAX_SERVER_WAIT_TIMEOUT),
        eMaxVertexOutputComponents = GLenum(GL_MAX_VERTEX_OUTPUT_COMPONENTS),
        eMaxGeometryInputComponents = GLenum(GL_MAX_GEOMETRY_INPUT_COMPONENTS),
        eMaxGeometryOutputComponents = GLenum(GL_MAX_GEOMETRY_OUTPUT_COMPONENTS),
        eMaxFragmentInputComponents = GLenum(GL_MAX_FRAGMENT_INPUT_COMPONENTS),
        eContextProfileMask = GLenum(GL_CONTEXT_PROFILE_MASK),
        eTextureBufferOffsetAlignment = GLenum(GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT),
        eMaxComputeUniformBlocks = GLenum(GL_MAX_COMPUTE_UNIFORM_BLOCKS),
        eMaxComputeTextureImageUnits = GLenum(GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS),
        eMaxComputeWorkGroupCount = GLenum(GL_MAX_COMPUTE_WORK_GROUP_COUNT),
        eMaxComputeWorkGroupSize = GLenum(GL_MAX_COMPUTE_WORK_GROUP_SIZE),
        eMaxVertexAtomicCounters = GLenum(GL_MAX_VERTEX_ATOMIC_COUNTERS),
        eMaxTessControlAtomicCounters = GLenum(GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS),
        eMaxTessEvaluationAtomicCounters = GLenum(GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS),
        eMaxGeometryAtomicCounters = GLenum(GL_MAX_GEOMETRY_ATOMIC_COUNTERS),
        eMaxFragmentAtomicCounters = GLenum(GL_MAX_FRAGMENT_ATOMIC_COUNTERS),
        eMaxCombinedAtomicCounters = GLenum(GL_MAX_COMBINED_ATOMIC_COUNTERS),
        eMaxFramebufferWidth = GLenum(GL_MAX_FRAMEBUFFER_WIDTH),
        eMaxFramebufferHeight = GLenum(GL_MAX_FRAMEBUFFER_HEIGHT),
        eMaxFramebufferLayers = GLenum(GL_MAX_FRAMEBUFFER_LAYERS),
        eMaxFramebufferSamples = GLenum(GL_MAX_FRAMEBUFFER_SAMPLES),
    };
    enum class MemoryBarrierMask : GLenum {
        eVertexAttribArrayBarrierBit = GLenum(GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT),
        eElementArrayBarrierBit = GLenum(GL_ELEMENT_ARRAY_BARRIER_BIT),
        eUniformBarrierBit = GLenum(GL_UNIFORM_BARRIER_BIT),
        eTextureFetchBarrierBit = GLenum(GL_TEXTURE_FETCH_BARRIER_BIT),
        eShaderImageAccessBarrierBit = GLenum(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT),
        eCommandBarrierBit = GLenum(GL_COMMAND_BARRIER_BIT),
        ePixelBufferBarrierBit = GLenum(GL_PIXEL_BUFFER_BARRIER_BIT),
        eTextureUpdateBarrierBit = GLenum(GL_TEXTURE_UPDATE_BARRIER_BIT),
        eBufferUpdateBarrierBit = GLenum(GL_BUFFER_UPDATE_BARRIER_BIT),
        eFramebufferBarrierBit = GLenum(GL_FRAMEBUFFER_BARRIER_BIT),
        eTransformFeedbackBarrierBit = GLenum(GL_TRANSFORM_FEEDBACK_BARRIER_BIT),
        eAtomicCounterBarrierBit = GLenum(GL_ATOMIC_COUNTER_BARRIER_BIT),
        eShaderStorageBarrierBit = GLenum(GL_SHADER_STORAGE_BARRIER_BIT),
        eClientMappedBufferBarrierBit = GLenum(GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT),
        eQueryBufferBarrierBit = GLenum(GL_QUERY_BUFFER_BARRIER_BIT),
        eAllBarrierBits = GLenum(GL_ALL_BARRIER_BITS),
    };
    enum class ContextProfileMask : GLenum {
        eContextCoreProfileBit = GLenum(GL_CONTEXT_CORE_PROFILE_BIT),
        eContextCompatibilityProfileBit = GLenum(GL_CONTEXT_COMPATIBILITY_PROFILE_BIT),
    };
    enum class ClampColorModeARB : GLenum {
        eFalse = GLenum(GL_FALSE),
        eTrue = GLenum(GL_TRUE),
        eFixedOnly = GLenum(GL_FIXED_ONLY),
    };
    enum class ConvolutionTarget : GLenum {
        eConvolution1d = GLenum(GL_CONVOLUTION_1D),
        eConvolution2d = GLenum(GL_CONVOLUTION_2D),
    };
    enum class Boolean : GLenum {
        eFalse = GLenum(GL_FALSE),
        eTrue = GLenum(GL_TRUE),
    };
    enum class ErrorCode : GLenum {
        eNoError = GLenum(GL_NO_ERROR),
        eInvalidEnum = GLenum(GL_INVALID_ENUM),
        eInvalidValue = GLenum(GL_INVALID_VALUE),
        eInvalidOperation = GLenum(GL_INVALID_OPERATION),
        eStackOverflow = GLenum(GL_STACK_OVERFLOW),
        eStackUnderflow = GLenum(GL_STACK_UNDERFLOW),
        eOutOfMemory = GLenum(GL_OUT_OF_MEMORY),
        eInvalidFramebufferOperation = GLenum(GL_INVALID_FRAMEBUFFER_OPERATION),
    };
    enum class BufferStorageMask : GLenum {
        eDynamicStorageBit = GLenum(GL_DYNAMIC_STORAGE_BIT),
        eClientStorageBit = GLenum(GL_CLIENT_STORAGE_BIT),
        eMapReadBit = GLenum(GL_MAP_READ_BIT),
        eMapWriteBit = GLenum(GL_MAP_WRITE_BIT),
        eMapPersistentBit = GLenum(GL_MAP_PERSISTENT_BIT),
        eMapCoherentBit = GLenum(GL_MAP_COHERENT_BIT),
    };
    enum class WeightPointerTypeARB : GLenum {
        eByte = GLenum(GL_BYTE),
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eShort = GLenum(GL_SHORT),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class StencilOp : GLenum {
        eZero = GLenum(GL_ZERO),
        eInvert = GLenum(GL_INVERT),
        eKeep = GLenum(GL_KEEP),
        eReplace = GLenum(GL_REPLACE),
        eIncr = GLenum(GL_INCR),
        eDecr = GLenum(GL_DECR),
        eIncrWrap = GLenum(GL_INCR_WRAP),
        eDecrWrap = GLenum(GL_DECR_WRAP),
    };
    enum class DepthStencilTextureMode : GLenum {
        eStencilIndex = GLenum(GL_STENCIL_INDEX),
        eDepthComponent = GLenum(GL_DEPTH_COMPONENT),
    };
    enum class SyncObjectMask : GLenum {
        eSyncFlushCommandsBit = GLenum(GL_SYNC_FLUSH_COMMANDS_BIT),
    };
    enum class VertexPointerType : GLenum {
        eShort = GLenum(GL_SHORT),
        eInt = GLenum(GL_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class FragmentShaderDestMaskATI : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class MinmaxTargetEXT : GLenum {
        eMinmax = GLenum(GL_MINMAX),
    };
    enum class HintMode : GLenum {
        eDontCare = GLenum(GL_DONT_CARE),
        eFastest = GLenum(GL_FASTEST),
        eNicest = GLenum(GL_NICEST),
    };
    enum class MapBufferAccessMask : GLenum {
        eMapReadBit = GLenum(GL_MAP_READ_BIT),
        eMapWriteBit = GLenum(GL_MAP_WRITE_BIT),
        eMapInvalidateRangeBit = GLenum(GL_MAP_INVALIDATE_RANGE_BIT),
        eMapInvalidateBufferBit = GLenum(GL_MAP_INVALIDATE_BUFFER_BIT),
        eMapFlushExplicitBit = GLenum(GL_MAP_FLUSH_EXPLICIT_BIT),
        eMapUnsynchronizedBit = GLenum(GL_MAP_UNSYNCHRONIZED_BIT),
        eMapPersistentBit = GLenum(GL_MAP_PERSISTENT_BIT),
        eMapCoherentBit = GLenum(GL_MAP_COHERENT_BIT),
    };
    enum class DebugSeverity : GLenum {
        eDontCare = GLenum(GL_DONT_CARE),
        eDebugSeverityNotification = GLenum(GL_DEBUG_SEVERITY_NOTIFICATION),
        eDebugSeverityHigh = GLenum(GL_DEBUG_SEVERITY_HIGH),
        eDebugSeverityMedium = GLenum(GL_DEBUG_SEVERITY_MEDIUM),
        eDebugSeverityLow = GLenum(GL_DEBUG_SEVERITY_LOW),
    };
    enum class AttribMask : GLenum {
        eDepthBufferBit = GLenum(GL_DEPTH_BUFFER_BIT),
        eStencilBufferBit = GLenum(GL_STENCIL_BUFFER_BIT),
        eColorBufferBit = GLenum(GL_COLOR_BUFFER_BIT),
    };
    enum class VertexAttribPropertyARB : GLenum {
        eVertexAttribBinding = GLenum(GL_VERTEX_ATTRIB_BINDING),
        eVertexAttribRelativeOffset = GLenum(GL_VERTEX_ATTRIB_RELATIVE_OFFSET),
        eVertexAttribArrayEnabled = GLenum(GL_VERTEX_ATTRIB_ARRAY_ENABLED),
        eVertexAttribArraySize = GLenum(GL_VERTEX_ATTRIB_ARRAY_SIZE),
        eVertexAttribArrayStride = GLenum(GL_VERTEX_ATTRIB_ARRAY_STRIDE),
        eVertexAttribArrayType = GLenum(GL_VERTEX_ATTRIB_ARRAY_TYPE),
        eCurrentVertexAttrib = GLenum(GL_CURRENT_VERTEX_ATTRIB),
        eVertexAttribArrayLong = GLenum(GL_VERTEX_ATTRIB_ARRAY_LONG),
        eVertexAttribArrayNormalized = GLenum(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED),
        eVertexAttribArrayBufferBinding = GLenum(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING),
        eVertexAttribArrayInteger = GLenum(GL_VERTEX_ATTRIB_ARRAY_INTEGER),
        eVertexAttribArrayDivisor = GLenum(GL_VERTEX_ATTRIB_ARRAY_DIVISOR),
    };
    enum class SpecialNumbers : GLenum {
        eFalse = GLenum(GL_FALSE),
        eNoError = GLenum(GL_NO_ERROR),
        eZero = GLenum(GL_ZERO),
        eNone = GLenum(GL_NONE),
        eTrue = GLenum(GL_TRUE),
        eOne = GLenum(GL_ONE),
        eInvalidIndex = GLenum(GL_INVALID_INDEX),
        eTimeoutIgnored = GLenum(GL_TIMEOUT_IGNORED),
    };
    enum class BufferTargetARB : GLenum {
        eArrayBuffer = GLenum(GL_ARRAY_BUFFER),
        eElementArrayBuffer = GLenum(GL_ELEMENT_ARRAY_BUFFER),
        ePixelPackBuffer = GLenum(GL_PIXEL_PACK_BUFFER),
        ePixelUnpackBuffer = GLenum(GL_PIXEL_UNPACK_BUFFER),
        eUniformBuffer = GLenum(GL_UNIFORM_BUFFER),
        eTextureBuffer = GLenum(GL_TEXTURE_BUFFER),
        eTransformFeedbackBuffer = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER),
        eCopyReadBuffer = GLenum(GL_COPY_READ_BUFFER),
        eCopyWriteBuffer = GLenum(GL_COPY_WRITE_BUFFER),
        eDrawIndirectBuffer = GLenum(GL_DRAW_INDIRECT_BUFFER),
        eShaderStorageBuffer = GLenum(GL_SHADER_STORAGE_BUFFER),
        eDispatchIndirectBuffer = GLenum(GL_DISPATCH_INDIRECT_BUFFER),
        eQueryBuffer = GLenum(GL_QUERY_BUFFER),
        eAtomicCounterBuffer = GLenum(GL_ATOMIC_COUNTER_BUFFER),
    };
    enum class VertexAttribPointerType : GLenum {
        eByte = GLenum(GL_BYTE),
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eShort = GLenum(GL_SHORT),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
        eHalfFloat = GLenum(GL_HALF_FLOAT),
        eFixed = GLenum(GL_FIXED),
        eUnsignedInt2101010Rev = GLenum(GL_UNSIGNED_INT_2_10_10_10_REV),
        eUnsignedInt10f11f11fRev = GLenum(GL_UNSIGNED_INT_10F_11F_11F_REV),
        eInt2101010Rev = GLenum(GL_INT_2_10_10_10_REV),
    };
    enum class PixelTexGenModeSGIX : GLenum {
        eNone = GLenum(GL_NONE),
        eAlpha = GLenum(GL_ALPHA),
        eRgb = GLenum(GL_RGB),
        eRgba = GLenum(GL_RGBA),
    };
    enum class VertexBufferObjectUsage : GLenum {
        eStreamDraw = GLenum(GL_STREAM_DRAW),
        eStreamRead = GLenum(GL_STREAM_READ),
        eStreamCopy = GLenum(GL_STREAM_COPY),
        eStaticDraw = GLenum(GL_STATIC_DRAW),
        eStaticRead = GLenum(GL_STATIC_READ),
        eStaticCopy = GLenum(GL_STATIC_COPY),
        eDynamicDraw = GLenum(GL_DYNAMIC_DRAW),
        eDynamicRead = GLenum(GL_DYNAMIC_READ),
        eDynamicCopy = GLenum(GL_DYNAMIC_COPY),
    };
    enum class AttributeType : GLenum {
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
        eFloatVec2 = GLenum(GL_FLOAT_VEC2),
        eFloatVec3 = GLenum(GL_FLOAT_VEC3),
        eFloatVec4 = GLenum(GL_FLOAT_VEC4),
        eIntVec2 = GLenum(GL_INT_VEC2),
        eIntVec3 = GLenum(GL_INT_VEC3),
        eIntVec4 = GLenum(GL_INT_VEC4),
        eBool = GLenum(GL_BOOL),
        eBoolVec2 = GLenum(GL_BOOL_VEC2),
        eBoolVec3 = GLenum(GL_BOOL_VEC3),
        eBoolVec4 = GLenum(GL_BOOL_VEC4),
        eFloatMat2 = GLenum(GL_FLOAT_MAT2),
        eFloatMat3 = GLenum(GL_FLOAT_MAT3),
        eFloatMat4 = GLenum(GL_FLOAT_MAT4),
        eSampler1d = GLenum(GL_SAMPLER_1D),
        eSampler2d = GLenum(GL_SAMPLER_2D),
        eSampler3d = GLenum(GL_SAMPLER_3D),
        eSamplerCube = GLenum(GL_SAMPLER_CUBE),
        eSampler1dShadow = GLenum(GL_SAMPLER_1D_SHADOW),
        eSampler2dShadow = GLenum(GL_SAMPLER_2D_SHADOW),
        eSampler2dRect = GLenum(GL_SAMPLER_2D_RECT),
        eSampler2dRectShadow = GLenum(GL_SAMPLER_2D_RECT_SHADOW),
        eFloatMat2x3 = GLenum(GL_FLOAT_MAT2x3),
        eFloatMat2x4 = GLenum(GL_FLOAT_MAT2x4),
        eFloatMat3x2 = GLenum(GL_FLOAT_MAT3x2),
        eFloatMat3x4 = GLenum(GL_FLOAT_MAT3x4),
        eFloatMat4x2 = GLenum(GL_FLOAT_MAT4x2),
        eFloatMat4x3 = GLenum(GL_FLOAT_MAT4x3),
        eSamplerBuffer = GLenum(GL_SAMPLER_BUFFER),
        eSampler1dArrayShadow = GLenum(GL_SAMPLER_1D_ARRAY_SHADOW),
        eSampler2dArrayShadow = GLenum(GL_SAMPLER_2D_ARRAY_SHADOW),
        eSamplerCubeShadow = GLenum(GL_SAMPLER_CUBE_SHADOW),
        eUnsignedIntVec2 = GLenum(GL_UNSIGNED_INT_VEC2),
        eUnsignedIntVec3 = GLenum(GL_UNSIGNED_INT_VEC3),
        eUnsignedIntVec4 = GLenum(GL_UNSIGNED_INT_VEC4),
        eIntSampler1d = GLenum(GL_INT_SAMPLER_1D),
        eIntSampler2d = GLenum(GL_INT_SAMPLER_2D),
        eIntSampler3d = GLenum(GL_INT_SAMPLER_3D),
        eIntSamplerCube = GLenum(GL_INT_SAMPLER_CUBE),
        eIntSampler2dRect = GLenum(GL_INT_SAMPLER_2D_RECT),
        eIntSampler1dArray = GLenum(GL_INT_SAMPLER_1D_ARRAY),
        eIntSampler2dArray = GLenum(GL_INT_SAMPLER_2D_ARRAY),
        eIntSamplerBuffer = GLenum(GL_INT_SAMPLER_BUFFER),
        eUnsignedIntSampler1d = GLenum(GL_UNSIGNED_INT_SAMPLER_1D),
        eUnsignedIntSampler2d = GLenum(GL_UNSIGNED_INT_SAMPLER_2D),
        eUnsignedIntSampler3d = GLenum(GL_UNSIGNED_INT_SAMPLER_3D),
        eUnsignedIntSamplerCube = GLenum(GL_UNSIGNED_INT_SAMPLER_CUBE),
        eUnsignedIntSampler2dRect = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_RECT),
        eUnsignedIntSampler1dArray = GLenum(GL_UNSIGNED_INT_SAMPLER_1D_ARRAY),
        eUnsignedIntSampler2dArray = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_ARRAY),
        eUnsignedIntSamplerBuffer = GLenum(GL_UNSIGNED_INT_SAMPLER_BUFFER),
        eDoubleMat2 = GLenum(GL_DOUBLE_MAT2),
        eDoubleMat3 = GLenum(GL_DOUBLE_MAT3),
        eDoubleMat4 = GLenum(GL_DOUBLE_MAT4),
        eDoubleMat2x3 = GLenum(GL_DOUBLE_MAT2x3),
        eDoubleMat2x4 = GLenum(GL_DOUBLE_MAT2x4),
        eDoubleMat3x2 = GLenum(GL_DOUBLE_MAT3x2),
        eDoubleMat3x4 = GLenum(GL_DOUBLE_MAT3x4),
        eDoubleMat4x2 = GLenum(GL_DOUBLE_MAT4x2),
        eDoubleMat4x3 = GLenum(GL_DOUBLE_MAT4x3),
        eDoubleVec2 = GLenum(GL_DOUBLE_VEC2),
        eDoubleVec3 = GLenum(GL_DOUBLE_VEC3),
        eDoubleVec4 = GLenum(GL_DOUBLE_VEC4),
        eSamplerCubeMapArray = GLenum(GL_SAMPLER_CUBE_MAP_ARRAY),
        eSamplerCubeMapArrayShadow = GLenum(GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW),
        eIntSamplerCubeMapArray = GLenum(GL_INT_SAMPLER_CUBE_MAP_ARRAY),
        eUnsignedIntSamplerCubeMapArray = GLenum(GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY),
        eImage1d = GLenum(GL_IMAGE_1D),
        eImage2d = GLenum(GL_IMAGE_2D),
        eImage3d = GLenum(GL_IMAGE_3D),
        eImage2dRect = GLenum(GL_IMAGE_2D_RECT),
        eImageCube = GLenum(GL_IMAGE_CUBE),
        eImageBuffer = GLenum(GL_IMAGE_BUFFER),
        eImage1dArray = GLenum(GL_IMAGE_1D_ARRAY),
        eImage2dArray = GLenum(GL_IMAGE_2D_ARRAY),
        eImageCubeMapArray = GLenum(GL_IMAGE_CUBE_MAP_ARRAY),
        eImage2dMultisample = GLenum(GL_IMAGE_2D_MULTISAMPLE),
        eImage2dMultisampleArray = GLenum(GL_IMAGE_2D_MULTISAMPLE_ARRAY),
        eIntImage1d = GLenum(GL_INT_IMAGE_1D),
        eIntImage2d = GLenum(GL_INT_IMAGE_2D),
        eIntImage3d = GLenum(GL_INT_IMAGE_3D),
        eIntImage2dRect = GLenum(GL_INT_IMAGE_2D_RECT),
        eIntImageCube = GLenum(GL_INT_IMAGE_CUBE),
        eIntImageBuffer = GLenum(GL_INT_IMAGE_BUFFER),
        eIntImage1dArray = GLenum(GL_INT_IMAGE_1D_ARRAY),
        eIntImage2dArray = GLenum(GL_INT_IMAGE_2D_ARRAY),
        eIntImageCubeMapArray = GLenum(GL_INT_IMAGE_CUBE_MAP_ARRAY),
        eIntImage2dMultisample = GLenum(GL_INT_IMAGE_2D_MULTISAMPLE),
        eIntImage2dMultisampleArray = GLenum(GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY),
        eUnsignedIntImage1d = GLenum(GL_UNSIGNED_INT_IMAGE_1D),
        eUnsignedIntImage2d = GLenum(GL_UNSIGNED_INT_IMAGE_2D),
        eUnsignedIntImage3d = GLenum(GL_UNSIGNED_INT_IMAGE_3D),
        eUnsignedIntImage2dRect = GLenum(GL_UNSIGNED_INT_IMAGE_2D_RECT),
        eUnsignedIntImageCube = GLenum(GL_UNSIGNED_INT_IMAGE_CUBE),
        eUnsignedIntImageBuffer = GLenum(GL_UNSIGNED_INT_IMAGE_BUFFER),
        eUnsignedIntImage1dArray = GLenum(GL_UNSIGNED_INT_IMAGE_1D_ARRAY),
        eUnsignedIntImage2dArray = GLenum(GL_UNSIGNED_INT_IMAGE_2D_ARRAY),
        eUnsignedIntImageCubeMapArray = GLenum(GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY),
        eUnsignedIntImage2dMultisample = GLenum(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE),
        eUnsignedIntImage2dMultisampleArray = GLenum(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY),
        eSampler2dMultisample = GLenum(GL_SAMPLER_2D_MULTISAMPLE),
        eIntSampler2dMultisample = GLenum(GL_INT_SAMPLER_2D_MULTISAMPLE),
        eUnsignedIntSampler2dMultisample = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE),
        eSampler2dMultisampleArray = GLenum(GL_SAMPLER_2D_MULTISAMPLE_ARRAY),
        eIntSampler2dMultisampleArray = GLenum(GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY),
        eUnsignedIntSampler2dMultisampleArray = GLenum(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY),
    };
    enum class ClipControlDepth : GLenum {
        eNegativeOneToOne = GLenum(GL_NEGATIVE_ONE_TO_ONE),
        eZeroToOne = GLenum(GL_ZERO_TO_ONE),
    };
    enum class ClearBufferMask : GLenum {
        eDepthBufferBit = GLenum(GL_DEPTH_BUFFER_BIT),
        eStencilBufferBit = GLenum(GL_STENCIL_BUFFER_BIT),
        eColorBufferBit = GLenum(GL_COLOR_BUFFER_BIT),
    };
    enum class ConditionalRenderMode : GLenum {
        eQueryWait = GLenum(GL_QUERY_WAIT),
        eQueryNoWait = GLenum(GL_QUERY_NO_WAIT),
        eQueryByRegionWait = GLenum(GL_QUERY_BY_REGION_WAIT),
        eQueryByRegionNoWait = GLenum(GL_QUERY_BY_REGION_NO_WAIT),
        eQueryWaitInverted = GLenum(GL_QUERY_WAIT_INVERTED),
        eQueryNoWaitInverted = GLenum(GL_QUERY_NO_WAIT_INVERTED),
        eQueryByRegionWaitInverted = GLenum(GL_QUERY_BY_REGION_WAIT_INVERTED),
        eQueryByRegionNoWaitInverted = GLenum(GL_QUERY_BY_REGION_NO_WAIT_INVERTED),
    };
    enum class PathGenMode : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class TextureTarget : GLenum {
        eTexture1d = GLenum(GL_TEXTURE_1D),
        eTexture2d = GLenum(GL_TEXTURE_2D),
        eProxyTexture1d = GLenum(GL_PROXY_TEXTURE_1D),
        eProxyTexture2d = GLenum(GL_PROXY_TEXTURE_2D),
        eTexture3d = GLenum(GL_TEXTURE_3D),
        eProxyTexture3d = GLenum(GL_PROXY_TEXTURE_3D),
        eTextureRectangle = GLenum(GL_TEXTURE_RECTANGLE),
        eProxyTextureRectangle = GLenum(GL_PROXY_TEXTURE_RECTANGLE),
        eTextureCubeMap = GLenum(GL_TEXTURE_CUBE_MAP),
        eTextureCubeMapPositiveX = GLenum(GL_TEXTURE_CUBE_MAP_POSITIVE_X),
        eTextureCubeMapNegativeX = GLenum(GL_TEXTURE_CUBE_MAP_NEGATIVE_X),
        eTextureCubeMapPositiveY = GLenum(GL_TEXTURE_CUBE_MAP_POSITIVE_Y),
        eTextureCubeMapNegativeY = GLenum(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y),
        eTextureCubeMapPositiveZ = GLenum(GL_TEXTURE_CUBE_MAP_POSITIVE_Z),
        eTextureCubeMapNegativeZ = GLenum(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z),
        eProxyTextureCubeMap = GLenum(GL_PROXY_TEXTURE_CUBE_MAP),
        eTexture1dArray = GLenum(GL_TEXTURE_1D_ARRAY),
        eProxyTexture1dArray = GLenum(GL_PROXY_TEXTURE_1D_ARRAY),
        eTexture2dArray = GLenum(GL_TEXTURE_2D_ARRAY),
        eProxyTexture2dArray = GLenum(GL_PROXY_TEXTURE_2D_ARRAY),
        eTextureBuffer = GLenum(GL_TEXTURE_BUFFER),
        eRenderbuffer = GLenum(GL_RENDERBUFFER),
        eTextureCubeMapArray = GLenum(GL_TEXTURE_CUBE_MAP_ARRAY),
        eProxyTextureCubeMapArray = GLenum(GL_PROXY_TEXTURE_CUBE_MAP_ARRAY),
        eTexture2dMultisample = GLenum(GL_TEXTURE_2D_MULTISAMPLE),
        eProxyTexture2dMultisample = GLenum(GL_PROXY_TEXTURE_2D_MULTISAMPLE),
        eTexture2dMultisampleArray = GLenum(GL_TEXTURE_2D_MULTISAMPLE_ARRAY),
        eProxyTexture2dMultisampleArray = GLenum(GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY),
    };
    enum class PrecisionType : GLenum {
        eLowFloat = GLenum(GL_LOW_FLOAT),
        eMediumFloat = GLenum(GL_MEDIUM_FLOAT),
        eHighFloat = GLenum(GL_HIGH_FLOAT),
        eLowInt = GLenum(GL_LOW_INT),
        eMediumInt = GLenum(GL_MEDIUM_INT),
        eHighInt = GLenum(GL_HIGH_INT),
    };
    enum class GetTextureParameter : GLenum {
        eTextureWidth = GLenum(GL_TEXTURE_WIDTH),
        eTextureHeight = GLenum(GL_TEXTURE_HEIGHT),
        eTextureInternalFormat = GLenum(GL_TEXTURE_INTERNAL_FORMAT),
        eTextureBorderColor = GLenum(GL_TEXTURE_BORDER_COLOR),
        eTextureMagFilter = GLenum(GL_TEXTURE_MAG_FILTER),
        eTextureMinFilter = GLenum(GL_TEXTURE_MIN_FILTER),
        eTextureWrapS = GLenum(GL_TEXTURE_WRAP_S),
        eTextureWrapT = GLenum(GL_TEXTURE_WRAP_T),
        eTextureRedSize = GLenum(GL_TEXTURE_RED_SIZE),
        eTextureGreenSize = GLenum(GL_TEXTURE_GREEN_SIZE),
        eTextureBlueSize = GLenum(GL_TEXTURE_BLUE_SIZE),
        eTextureAlphaSize = GLenum(GL_TEXTURE_ALPHA_SIZE),
    };
    enum class PixelType : GLenum {
        eByte = GLenum(GL_BYTE),
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eShort = GLenum(GL_SHORT),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eFloat = GLenum(GL_FLOAT),
        eHalfFloat = GLenum(GL_HALF_FLOAT),
        eUnsignedByte332 = GLenum(GL_UNSIGNED_BYTE_3_3_2),
        eUnsignedShort4444 = GLenum(GL_UNSIGNED_SHORT_4_4_4_4),
        eUnsignedShort5551 = GLenum(GL_UNSIGNED_SHORT_5_5_5_1),
        eUnsignedInt8888 = GLenum(GL_UNSIGNED_INT_8_8_8_8),
        eUnsignedInt1010102 = GLenum(GL_UNSIGNED_INT_10_10_10_2),
        eUnsignedByte233Rev = GLenum(GL_UNSIGNED_BYTE_2_3_3_REV),
        eUnsignedShort565 = GLenum(GL_UNSIGNED_SHORT_5_6_5),
        eUnsignedShort565Rev = GLenum(GL_UNSIGNED_SHORT_5_6_5_REV),
        eUnsignedShort4444Rev = GLenum(GL_UNSIGNED_SHORT_4_4_4_4_REV),
        eUnsignedShort1555Rev = GLenum(GL_UNSIGNED_SHORT_1_5_5_5_REV),
        eUnsignedInt8888Rev = GLenum(GL_UNSIGNED_INT_8_8_8_8_REV),
        eUnsignedInt2101010Rev = GLenum(GL_UNSIGNED_INT_2_10_10_10_REV),
        eUnsignedInt248 = GLenum(GL_UNSIGNED_INT_24_8),
        eUnsignedInt10f11f11fRev = GLenum(GL_UNSIGNED_INT_10F_11F_11F_REV),
        eUnsignedInt5999Rev = GLenum(GL_UNSIGNED_INT_5_9_9_9_REV),
        eFloat32UnsignedInt248Rev = GLenum(GL_FLOAT_32_UNSIGNED_INT_24_8_REV),
    };
    enum class ClipPlaneName : GLenum {
        eClipDistance0 = GLenum(GL_CLIP_DISTANCE0),
        eClipDistance1 = GLenum(GL_CLIP_DISTANCE1),
        eClipDistance2 = GLenum(GL_CLIP_DISTANCE2),
        eClipDistance3 = GLenum(GL_CLIP_DISTANCE3),
        eClipDistance4 = GLenum(GL_CLIP_DISTANCE4),
        eClipDistance5 = GLenum(GL_CLIP_DISTANCE5),
        eClipDistance6 = GLenum(GL_CLIP_DISTANCE6),
        eClipDistance7 = GLenum(GL_CLIP_DISTANCE7),
    };
    enum class GraphicsResetStatus : GLenum {
        eNoError = GLenum(GL_NO_ERROR),
        eGuiltyContextReset = GLenum(GL_GUILTY_CONTEXT_RESET),
        eInnocentContextReset = GLenum(GL_INNOCENT_CONTEXT_RESET),
        eUnknownContextReset = GLenum(GL_UNKNOWN_CONTEXT_RESET),
    };
    enum class BufferBit : GLenum {
        eColor = GLenum(GL_COLOR),
        eDepth = GLenum(GL_DEPTH),
        eStencil = GLenum(GL_STENCIL),
    };
    enum class ContextFlagMask : GLenum {
        eContextFlagForwardCompatibleBit = GLenum(GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT),
        eContextFlagDebugBit = GLenum(GL_CONTEXT_FLAG_DEBUG_BIT),
        eContextFlagRobustAccessBit = GLenum(GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT),
    };
    enum class GetPointervPName : GLenum {
        eDebugCallbackFunction = GLenum(GL_DEBUG_CALLBACK_FUNCTION),
        eDebugCallbackUserParam = GLenum(GL_DEBUG_CALLBACK_USER_PARAM),
    };
    enum class SubroutineParameterName : GLenum {
        eUniformSize = GLenum(GL_UNIFORM_SIZE),
        eUniformNameLength = GLenum(GL_UNIFORM_NAME_LENGTH),
        eNumCompatibleSubroutines = GLenum(GL_NUM_COMPATIBLE_SUBROUTINES),
        eCompatibleSubroutines = GLenum(GL_COMPATIBLE_SUBROUTINES),
    };
    enum class ClampColorTargetARB : GLenum {
        eClampReadColor = GLenum(GL_CLAMP_READ_COLOR),
    };
    enum class HintTarget : GLenum {
        eLineSmoothHint = GLenum(GL_LINE_SMOOTH_HINT),
        ePolygonSmoothHint = GLenum(GL_POLYGON_SMOOTH_HINT),
        eProgramBinaryRetrievableHint = GLenum(GL_PROGRAM_BINARY_RETRIEVABLE_HINT),
        eTextureCompressionHint = GLenum(GL_TEXTURE_COMPRESSION_HINT),
        eFragmentShaderDerivativeHint = GLenum(GL_FRAGMENT_SHADER_DERIVATIVE_HINT),
    };
    enum class ConvolutionTargetEXT : GLenum {
        eConvolution1d = GLenum(GL_CONVOLUTION_1D),
        eConvolution2d = GLenum(GL_CONVOLUTION_2D),
    };
    enum class TextureEnvParameter : GLenum {
        eTextureLodBias = GLenum(GL_TEXTURE_LOD_BIAS),
        eSrc1Alpha = GLenum(GL_SRC1_ALPHA),
    };
    enum class TextureCompareMode : GLenum {
        eNone = GLenum(GL_NONE),
        eCompareRefToTexture = GLenum(GL_COMPARE_REF_TO_TEXTURE),
    };
    enum class TextureCompareFunc : GLenum {
        eLequal = GLenum(GL_LEQUAL),
        eGequal = GLenum(GL_GEQUAL),
        eLess = GLenum(GL_LESS),
        eGreater = GLenum(GL_GREATER),
        eEqual = GLenum(GL_EQUAL),
        eNotequal = GLenum(GL_NOTEQUAL),
        eAlways = GLenum(GL_ALWAYS),
        eNever = GLenum(GL_NEVER),
    };
    enum class MeshMode1 : GLenum {
        ePoint = GLenum(GL_POINT),
        eLine = GLenum(GL_LINE),
    };
    enum class TriangleFace : GLenum {
        eFront = GLenum(GL_FRONT),
        eBack = GLenum(GL_BACK),
        eFrontAndBack = GLenum(GL_FRONT_AND_BACK),
    };
    enum class BlendingFactor : GLenum {
        eZero = GLenum(GL_ZERO),
        eOne = GLenum(GL_ONE),
        eSrcColor = GLenum(GL_SRC_COLOR),
        eOneMinusSrcColor = GLenum(GL_ONE_MINUS_SRC_COLOR),
        eSrcAlpha = GLenum(GL_SRC_ALPHA),
        eOneMinusSrcAlpha = GLenum(GL_ONE_MINUS_SRC_ALPHA),
        eDstAlpha = GLenum(GL_DST_ALPHA),
        eOneMinusDstAlpha = GLenum(GL_ONE_MINUS_DST_ALPHA),
        eDstColor = GLenum(GL_DST_COLOR),
        eOneMinusDstColor = GLenum(GL_ONE_MINUS_DST_COLOR),
        eSrcAlphaSaturate = GLenum(GL_SRC_ALPHA_SATURATE),
        eConstantColor = GLenum(GL_CONSTANT_COLOR),
        eOneMinusConstantColor = GLenum(GL_ONE_MINUS_CONSTANT_COLOR),
        eConstantAlpha = GLenum(GL_CONSTANT_ALPHA),
        eOneMinusConstantAlpha = GLenum(GL_ONE_MINUS_CONSTANT_ALPHA),
        eSrc1Alpha = GLenum(GL_SRC1_ALPHA),
        eSrc1Color = GLenum(GL_SRC1_COLOR),
        eOneMinusSrc1Color = GLenum(GL_ONE_MINUS_SRC1_COLOR),
        eOneMinusSrc1Alpha = GLenum(GL_ONE_MINUS_SRC1_ALPHA),
    };
    enum class TextureMagFilter : GLenum {
        eNearest = GLenum(GL_NEAREST),
        eLinear = GLenum(GL_LINEAR),
    };
    enum class FragmentShaderGenericSourceATI : GLenum {
        eZero = GLenum(GL_ZERO),
        eOne = GLenum(GL_ONE),
    };
    enum class FragmentShaderValueRepATI : GLenum {
        eNone = GLenum(GL_NONE),
        eRed = GLenum(GL_RED),
        eGreen = GLenum(GL_GREEN),
        eBlue = GLenum(GL_BLUE),
        eAlpha = GLenum(GL_ALPHA),
    };
    enum class FogMode : GLenum {
        eLinear = GLenum(GL_LINEAR),
    };
    enum class CombinerScaleNV : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class PathColorFormat : GLenum {
        eNone = GLenum(GL_NONE),
        eAlpha = GLenum(GL_ALPHA),
        eRgb = GLenum(GL_RGB),
        eRgba = GLenum(GL_RGBA),
    };
    enum class DrawBufferMode : GLenum {
        eNone = GLenum(GL_NONE),
        eFrontLeft = GLenum(GL_FRONT_LEFT),
        eFrontRight = GLenum(GL_FRONT_RIGHT),
        eBackLeft = GLenum(GL_BACK_LEFT),
        eBackRight = GLenum(GL_BACK_RIGHT),
        eFront = GLenum(GL_FRONT),
        eBack = GLenum(GL_BACK),
        eLeft = GLenum(GL_LEFT),
        eRight = GLenum(GL_RIGHT),
        eFrontAndBack = GLenum(GL_FRONT_AND_BACK),
        eColorAttachment0 = GLenum(GL_COLOR_ATTACHMENT0),
        eColorAttachment1 = GLenum(GL_COLOR_ATTACHMENT1),
        eColorAttachment2 = GLenum(GL_COLOR_ATTACHMENT2),
        eColorAttachment3 = GLenum(GL_COLOR_ATTACHMENT3),
        eColorAttachment4 = GLenum(GL_COLOR_ATTACHMENT4),
        eColorAttachment5 = GLenum(GL_COLOR_ATTACHMENT5),
        eColorAttachment6 = GLenum(GL_COLOR_ATTACHMENT6),
        eColorAttachment7 = GLenum(GL_COLOR_ATTACHMENT7),
        eColorAttachment8 = GLenum(GL_COLOR_ATTACHMENT8),
        eColorAttachment9 = GLenum(GL_COLOR_ATTACHMENT9),
        eColorAttachment10 = GLenum(GL_COLOR_ATTACHMENT10),
        eColorAttachment11 = GLenum(GL_COLOR_ATTACHMENT11),
        eColorAttachment12 = GLenum(GL_COLOR_ATTACHMENT12),
        eColorAttachment13 = GLenum(GL_COLOR_ATTACHMENT13),
        eColorAttachment14 = GLenum(GL_COLOR_ATTACHMENT14),
        eColorAttachment15 = GLenum(GL_COLOR_ATTACHMENT15),
        eColorAttachment16 = GLenum(GL_COLOR_ATTACHMENT16),
        eColorAttachment17 = GLenum(GL_COLOR_ATTACHMENT17),
        eColorAttachment18 = GLenum(GL_COLOR_ATTACHMENT18),
        eColorAttachment19 = GLenum(GL_COLOR_ATTACHMENT19),
        eColorAttachment20 = GLenum(GL_COLOR_ATTACHMENT20),
        eColorAttachment21 = GLenum(GL_COLOR_ATTACHMENT21),
        eColorAttachment22 = GLenum(GL_COLOR_ATTACHMENT22),
        eColorAttachment23 = GLenum(GL_COLOR_ATTACHMENT23),
        eColorAttachment24 = GLenum(GL_COLOR_ATTACHMENT24),
        eColorAttachment25 = GLenum(GL_COLOR_ATTACHMENT25),
        eColorAttachment26 = GLenum(GL_COLOR_ATTACHMENT26),
        eColorAttachment27 = GLenum(GL_COLOR_ATTACHMENT27),
        eColorAttachment28 = GLenum(GL_COLOR_ATTACHMENT28),
        eColorAttachment29 = GLenum(GL_COLOR_ATTACHMENT29),
        eColorAttachment30 = GLenum(GL_COLOR_ATTACHMENT30),
        eColorAttachment31 = GLenum(GL_COLOR_ATTACHMENT31),
    };
    enum class ObjectIdentifier : GLenum {
        eTexture = GLenum(GL_TEXTURE),
        eVertexArray = GLenum(GL_VERTEX_ARRAY),
        eBuffer = GLenum(GL_BUFFER),
        eShader = GLenum(GL_SHADER),
        eProgram = GLenum(GL_PROGRAM),
        eQuery = GLenum(GL_QUERY),
        eProgramPipeline = GLenum(GL_PROGRAM_PIPELINE),
        eSampler = GLenum(GL_SAMPLER),
        eFramebuffer = GLenum(GL_FRAMEBUFFER),
        eRenderbuffer = GLenum(GL_RENDERBUFFER),
        eTransformFeedback = GLenum(GL_TRANSFORM_FEEDBACK),
    };
    enum class CopyImageSubDataTarget : GLenum {
        eTexture1d = GLenum(GL_TEXTURE_1D),
        eTexture2d = GLenum(GL_TEXTURE_2D),
        eTexture3d = GLenum(GL_TEXTURE_3D),
        eTextureRectangle = GLenum(GL_TEXTURE_RECTANGLE),
        eTextureCubeMap = GLenum(GL_TEXTURE_CUBE_MAP),
        eTexture1dArray = GLenum(GL_TEXTURE_1D_ARRAY),
        eTexture2dArray = GLenum(GL_TEXTURE_2D_ARRAY),
        eRenderbuffer = GLenum(GL_RENDERBUFFER),
        eTextureCubeMapArray = GLenum(GL_TEXTURE_CUBE_MAP_ARRAY),
        eTexture2dMultisample = GLenum(GL_TEXTURE_2D_MULTISAMPLE),
        eTexture2dMultisampleArray = GLenum(GL_TEXTURE_2D_MULTISAMPLE_ARRAY),
    };
    enum class TangentPointerTypeEXT : GLenum {
        eByte = GLenum(GL_BYTE),
        eShort = GLenum(GL_SHORT),
        eInt = GLenum(GL_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class BlendEquationModeEXT : GLenum {
        eFuncAdd = GLenum(GL_FUNC_ADD),
        eMin = GLenum(GL_MIN),
        eMax = GLenum(GL_MAX),
        eFuncSubtract = GLenum(GL_FUNC_SUBTRACT),
        eFuncReverseSubtract = GLenum(GL_FUNC_REVERSE_SUBTRACT),
    };
    enum class BinormalPointerTypeEXT : GLenum {
        eByte = GLenum(GL_BYTE),
        eShort = GLenum(GL_SHORT),
        eInt = GLenum(GL_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class ColorPointerType : GLenum {
        eByte = GLenum(GL_BYTE),
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
    };
    enum class SecondaryColorPointerTypeIBM : GLenum {
        eShort = GLenum(GL_SHORT),
        eInt = GLenum(GL_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class LogicOp : GLenum {
        eClear = GLenum(GL_CLEAR),
        eAnd = GLenum(GL_AND),
        eAndReverse = GLenum(GL_AND_REVERSE),
        eCopy = GLenum(GL_COPY),
        eAndInverted = GLenum(GL_AND_INVERTED),
        eNoop = GLenum(GL_NOOP),
        eXor = GLenum(GL_XOR),
        eOr = GLenum(GL_OR),
        eNor = GLenum(GL_NOR),
        eEquiv = GLenum(GL_EQUIV),
        eInvert = GLenum(GL_INVERT),
        eOrReverse = GLenum(GL_OR_REVERSE),
        eCopyInverted = GLenum(GL_COPY_INVERTED),
        eOrInverted = GLenum(GL_OR_INVERTED),
        eNand = GLenum(GL_NAND),
        eSet = GLenum(GL_SET),
    };
    enum class VertexAttribType : GLenum {
        eByte = GLenum(GL_BYTE),
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eShort = GLenum(GL_SHORT),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eInt = GLenum(GL_INT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
        eHalfFloat = GLenum(GL_HALF_FLOAT),
        eFixed = GLenum(GL_FIXED),
        eUnsignedInt2101010Rev = GLenum(GL_UNSIGNED_INT_2_10_10_10_REV),
        eUnsignedInt10f11f11fRev = GLenum(GL_UNSIGNED_INT_10F_11F_11F_REV),
        eInt2101010Rev = GLenum(GL_INT_2_10_10_10_REV),
    };
    enum class TextureEnvMode : GLenum {
        eBlend = GLenum(GL_BLEND),
        eReplace = GLenum(GL_REPLACE),
    };
    enum class ElementPointerTypeATI : GLenum {
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
    };
    enum class MatrixIndexPointerTypeARB : GLenum {
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
    };
    enum class PathFillMode : GLenum {
        eInvert = GLenum(GL_INVERT),
    };
    enum class VertexAttribLType : GLenum {
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class DrawElementsType : GLenum {
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
    };
    enum class PolygonMode : GLenum {
        ePoint = GLenum(GL_POINT),
        eLine = GLenum(GL_LINE),
        eFill = GLenum(GL_FILL),
    };
    enum class AtomicCounterBufferPName : GLenum {
        eAtomicCounterBufferReferencedByComputeShader = GLenum(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER),
        eAtomicCounterBufferBinding = GLenum(GL_ATOMIC_COUNTER_BUFFER_BINDING),
        eAtomicCounterBufferDataSize = GLenum(GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE),
        eAtomicCounterBufferActiveAtomicCounters = GLenum(GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS),
        eAtomicCounterBufferActiveAtomicCounterIndices = GLenum(GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES),
        eAtomicCounterBufferReferencedByVertexShader = GLenum(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER),
        eAtomicCounterBufferReferencedByTessControlShader = GLenum(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER),
        eAtomicCounterBufferReferencedByTessEvaluationShader = GLenum(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER),
        eAtomicCounterBufferReferencedByGeometryShader = GLenum(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER),
        eAtomicCounterBufferReferencedByFragmentShader = GLenum(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER),
    };
    enum class IndexPointerType : GLenum {
        eShort = GLenum(GL_SHORT),
        eInt = GLenum(GL_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class TexCoordPointerType : GLenum {
        eShort = GLenum(GL_SHORT),
        eInt = GLenum(GL_INT),
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class PixelFormat : GLenum {
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
        eStencilIndex = GLenum(GL_STENCIL_INDEX),
        eDepthComponent = GLenum(GL_DEPTH_COMPONENT),
        eRed = GLenum(GL_RED),
        eGreen = GLenum(GL_GREEN),
        eBlue = GLenum(GL_BLUE),
        eAlpha = GLenum(GL_ALPHA),
        eRgb = GLenum(GL_RGB),
        eRgba = GLenum(GL_RGBA),
        eBgr = GLenum(GL_BGR),
        eBgra = GLenum(GL_BGRA),
        eRg = GLenum(GL_RG),
        eRgInteger = GLenum(GL_RG_INTEGER),
        eDepthStencil = GLenum(GL_DEPTH_STENCIL),
        eRedInteger = GLenum(GL_RED_INTEGER),
        eGreenInteger = GLenum(GL_GREEN_INTEGER),
        eBlueInteger = GLenum(GL_BLUE_INTEGER),
        eRgbInteger = GLenum(GL_RGB_INTEGER),
        eRgbaInteger = GLenum(GL_RGBA_INTEGER),
        eBgrInteger = GLenum(GL_BGR_INTEGER),
        eBgraInteger = GLenum(GL_BGRA_INTEGER),
    };
    enum class TextureSwizzle : GLenum {
        eZero = GLenum(GL_ZERO),
        eOne = GLenum(GL_ONE),
        eRed = GLenum(GL_RED),
        eGreen = GLenum(GL_GREEN),
        eBlue = GLenum(GL_BLUE),
        eAlpha = GLenum(GL_ALPHA),
    };
    enum class FogPointerTypeIBM : GLenum {
        eFloat = GLenum(GL_FLOAT),
        eDouble = GLenum(GL_DOUBLE),
    };
    enum class FragmentShaderDestModMaskATI : GLenum {
        eNone = GLenum(GL_NONE),
    };
    enum class PixelCopyType : GLenum {
        eColor = GLenum(GL_COLOR),
        eDepth = GLenum(GL_DEPTH),
        eStencil = GLenum(GL_STENCIL),
    };
    enum class InternalFormatPName : GLenum {
        eSamples = GLenum(GL_SAMPLES),
        eInternalformatSupported = GLenum(GL_INTERNALFORMAT_SUPPORTED),
        eInternalformatPreferred = GLenum(GL_INTERNALFORMAT_PREFERRED),
        eInternalformatRedSize = GLenum(GL_INTERNALFORMAT_RED_SIZE),
        eInternalformatGreenSize = GLenum(GL_INTERNALFORMAT_GREEN_SIZE),
        eInternalformatBlueSize = GLenum(GL_INTERNALFORMAT_BLUE_SIZE),
        eInternalformatAlphaSize = GLenum(GL_INTERNALFORMAT_ALPHA_SIZE),
        eInternalformatDepthSize = GLenum(GL_INTERNALFORMAT_DEPTH_SIZE),
        eInternalformatStencilSize = GLenum(GL_INTERNALFORMAT_STENCIL_SIZE),
        eInternalformatSharedSize = GLenum(GL_INTERNALFORMAT_SHARED_SIZE),
        eInternalformatRedType = GLenum(GL_INTERNALFORMAT_RED_TYPE),
        eInternalformatGreenType = GLenum(GL_INTERNALFORMAT_GREEN_TYPE),
        eInternalformatBlueType = GLenum(GL_INTERNALFORMAT_BLUE_TYPE),
        eInternalformatAlphaType = GLenum(GL_INTERNALFORMAT_ALPHA_TYPE),
        eInternalformatDepthType = GLenum(GL_INTERNALFORMAT_DEPTH_TYPE),
        eInternalformatStencilType = GLenum(GL_INTERNALFORMAT_STENCIL_TYPE),
        eMaxWidth = GLenum(GL_MAX_WIDTH),
        eMaxHeight = GLenum(GL_MAX_HEIGHT),
        eMaxDepth = GLenum(GL_MAX_DEPTH),
        eMaxLayers = GLenum(GL_MAX_LAYERS),
        eColorComponents = GLenum(GL_COLOR_COMPONENTS),
        eColorRenderable = GLenum(GL_COLOR_RENDERABLE),
        eDepthRenderable = GLenum(GL_DEPTH_RENDERABLE),
        eStencilRenderable = GLenum(GL_STENCIL_RENDERABLE),
        eFramebufferRenderable = GLenum(GL_FRAMEBUFFER_RENDERABLE),
        eFramebufferRenderableLayered = GLenum(GL_FRAMEBUFFER_RENDERABLE_LAYERED),
        eFramebufferBlend = GLenum(GL_FRAMEBUFFER_BLEND),
        eReadPixels = GLenum(GL_READ_PIXELS),
        eReadPixelsFormat = GLenum(GL_READ_PIXELS_FORMAT),
        eReadPixelsType = GLenum(GL_READ_PIXELS_TYPE),
        eTextureImageFormat = GLenum(GL_TEXTURE_IMAGE_FORMAT),
        eTextureImageType = GLenum(GL_TEXTURE_IMAGE_TYPE),
        eGetTextureImageFormat = GLenum(GL_GET_TEXTURE_IMAGE_FORMAT),
        eGetTextureImageType = GLenum(GL_GET_TEXTURE_IMAGE_TYPE),
        eMipmap = GLenum(GL_MIPMAP),
        eAutoGenerateMipmap = GLenum(GL_AUTO_GENERATE_MIPMAP),
        eColorEncoding = GLenum(GL_COLOR_ENCODING),
        eSrgbRead = GLenum(GL_SRGB_READ),
        eSrgbWrite = GLenum(GL_SRGB_WRITE),
        eFilter = GLenum(GL_FILTER),
        eVertexTexture = GLenum(GL_VERTEX_TEXTURE),
        eTessControlTexture = GLenum(GL_TESS_CONTROL_TEXTURE),
        eTessEvaluationTexture = GLenum(GL_TESS_EVALUATION_TEXTURE),
        eGeometryTexture = GLenum(GL_GEOMETRY_TEXTURE),
        eFragmentTexture = GLenum(GL_FRAGMENT_TEXTURE),
        eComputeTexture = GLenum(GL_COMPUTE_TEXTURE),
        eTextureShadow = GLenum(GL_TEXTURE_SHADOW),
        eTextureGather = GLenum(GL_TEXTURE_GATHER),
        eTextureGatherShadow = GLenum(GL_TEXTURE_GATHER_SHADOW),
        eShaderImageLoad = GLenum(GL_SHADER_IMAGE_LOAD),
        eShaderImageStore = GLenum(GL_SHADER_IMAGE_STORE),
        eShaderImageAtomic = GLenum(GL_SHADER_IMAGE_ATOMIC),
        eImageTexelSize = GLenum(GL_IMAGE_TEXEL_SIZE),
        eImageCompatibilityClass = GLenum(GL_IMAGE_COMPATIBILITY_CLASS),
        eImagePixelFormat = GLenum(GL_IMAGE_PIXEL_FORMAT),
        eImagePixelType = GLenum(GL_IMAGE_PIXEL_TYPE),
        eSimultaneousTextureAndDepthTest = GLenum(GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST),
        eSimultaneousTextureAndStencilTest = GLenum(GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST),
        eSimultaneousTextureAndDepthWrite = GLenum(GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE),
        eSimultaneousTextureAndStencilWrite = GLenum(GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE),
        eTextureCompressedBlockWidth = GLenum(GL_TEXTURE_COMPRESSED_BLOCK_WIDTH),
        eTextureCompressedBlockHeight = GLenum(GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT),
        eTextureCompressedBlockSize = GLenum(GL_TEXTURE_COMPRESSED_BLOCK_SIZE),
        eClearBuffer = GLenum(GL_CLEAR_BUFFER),
        eTextureView = GLenum(GL_TEXTURE_VIEW),
        eViewCompatibilityClass = GLenum(GL_VIEW_COMPATIBILITY_CLASS),
        eTextureCompressed = GLenum(GL_TEXTURE_COMPRESSED),
        eImageFormatCompatibilityType = GLenum(GL_IMAGE_FORMAT_COMPATIBILITY_TYPE),
        eClearTexture = GLenum(GL_CLEAR_TEXTURE),
        eNumSampleCounts = GLenum(GL_NUM_SAMPLE_COUNTS),
    };
    enum class ProgramInterfacePName : GLenum {
        eActiveResources = GLenum(GL_ACTIVE_RESOURCES),
        eMaxNameLength = GLenum(GL_MAX_NAME_LENGTH),
        eMaxNumActiveVariables = GLenum(GL_MAX_NUM_ACTIVE_VARIABLES),
        eMaxNumCompatibleSubroutines = GLenum(GL_MAX_NUM_COMPATIBLE_SUBROUTINES),
    };
    enum class SamplerParameterF : GLenum {
        eTextureBorderColor = GLenum(GL_TEXTURE_BORDER_COLOR),
        eTextureMinLod = GLenum(GL_TEXTURE_MIN_LOD),
        eTextureMaxLod = GLenum(GL_TEXTURE_MAX_LOD),
        eTextureLodBias = GLenum(GL_TEXTURE_LOD_BIAS),
    };
    enum class InvalidateFramebufferAttachment : GLenum {
        eColor = GLenum(GL_COLOR),
        eDepth = GLenum(GL_DEPTH),
        eStencil = GLenum(GL_STENCIL),
        eDepthStencilAttachment = GLenum(GL_DEPTH_STENCIL_ATTACHMENT),
        eColorAttachment0 = GLenum(GL_COLOR_ATTACHMENT0),
        eColorAttachment1 = GLenum(GL_COLOR_ATTACHMENT1),
        eColorAttachment2 = GLenum(GL_COLOR_ATTACHMENT2),
        eColorAttachment3 = GLenum(GL_COLOR_ATTACHMENT3),
        eColorAttachment4 = GLenum(GL_COLOR_ATTACHMENT4),
        eColorAttachment5 = GLenum(GL_COLOR_ATTACHMENT5),
        eColorAttachment6 = GLenum(GL_COLOR_ATTACHMENT6),
        eColorAttachment7 = GLenum(GL_COLOR_ATTACHMENT7),
        eColorAttachment8 = GLenum(GL_COLOR_ATTACHMENT8),
        eColorAttachment9 = GLenum(GL_COLOR_ATTACHMENT9),
        eColorAttachment10 = GLenum(GL_COLOR_ATTACHMENT10),
        eColorAttachment11 = GLenum(GL_COLOR_ATTACHMENT11),
        eColorAttachment12 = GLenum(GL_COLOR_ATTACHMENT12),
        eColorAttachment13 = GLenum(GL_COLOR_ATTACHMENT13),
        eColorAttachment14 = GLenum(GL_COLOR_ATTACHMENT14),
        eColorAttachment15 = GLenum(GL_COLOR_ATTACHMENT15),
        eColorAttachment16 = GLenum(GL_COLOR_ATTACHMENT16),
        eColorAttachment17 = GLenum(GL_COLOR_ATTACHMENT17),
        eColorAttachment18 = GLenum(GL_COLOR_ATTACHMENT18),
        eColorAttachment19 = GLenum(GL_COLOR_ATTACHMENT19),
        eColorAttachment20 = GLenum(GL_COLOR_ATTACHMENT20),
        eColorAttachment21 = GLenum(GL_COLOR_ATTACHMENT21),
        eColorAttachment22 = GLenum(GL_COLOR_ATTACHMENT22),
        eColorAttachment23 = GLenum(GL_COLOR_ATTACHMENT23),
        eColorAttachment24 = GLenum(GL_COLOR_ATTACHMENT24),
        eColorAttachment25 = GLenum(GL_COLOR_ATTACHMENT25),
        eColorAttachment26 = GLenum(GL_COLOR_ATTACHMENT26),
        eColorAttachment27 = GLenum(GL_COLOR_ATTACHMENT27),
        eColorAttachment28 = GLenum(GL_COLOR_ATTACHMENT28),
        eColorAttachment29 = GLenum(GL_COLOR_ATTACHMENT29),
        eColorAttachment30 = GLenum(GL_COLOR_ATTACHMENT30),
        eColorAttachment31 = GLenum(GL_COLOR_ATTACHMENT31),
        eDepthAttachment = GLenum(GL_DEPTH_ATTACHMENT),
    };
    enum  : GLenum {
        eContextLost = GLenum(GL_CONTEXT_LOST),
        eTextureTarget = GLenum(GL_TEXTURE_TARGET),
        eTextureDepth = GLenum(GL_TEXTURE_DEPTH),
        eFramebufferDefault = GLenum(GL_FRAMEBUFFER_DEFAULT),
        ePrimitiveRestartForPatchesSupported = GLenum(GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED),
        eDebugNextLoggedMessageLength = GLenum(GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH),
        eLoseContextOnReset = GLenum(GL_LOSE_CONTEXT_ON_RESET),
        eResetNotificationStrategy = GLenum(GL_RESET_NOTIFICATION_STRATEGY),
        eUndefinedVertex = GLenum(GL_UNDEFINED_VERTEX),
        eNoResetNotification = GLenum(GL_NO_RESET_NOTIFICATION),
        eMaxComputeSharedMemorySize = GLenum(GL_MAX_COMPUTE_SHARED_MEMORY_SIZE),
        eMaxCombinedDimensions = GLenum(GL_MAX_COMBINED_DIMENSIONS),
        eDepthComponents = GLenum(GL_DEPTH_COMPONENTS),
        eStencilComponents = GLenum(GL_STENCIL_COMPONENTS),
        eManualGenerateMipmap = GLenum(GL_MANUAL_GENERATE_MIPMAP),
        eFullSupport = GLenum(GL_FULL_SUPPORT),
        eCaveatSupport = GLenum(GL_CAVEAT_SUPPORT),
        eImageClass4X32 = GLenum(GL_IMAGE_CLASS_4_X_32),
        eImageClass2X32 = GLenum(GL_IMAGE_CLASS_2_X_32),
        eImageClass1X32 = GLenum(GL_IMAGE_CLASS_1_X_32),
        eImageClass4X16 = GLenum(GL_IMAGE_CLASS_4_X_16),
        eImageClass2X16 = GLenum(GL_IMAGE_CLASS_2_X_16),
        eImageClass1X16 = GLenum(GL_IMAGE_CLASS_1_X_16),
        eImageClass4X8 = GLenum(GL_IMAGE_CLASS_4_X_8),
        eImageClass2X8 = GLenum(GL_IMAGE_CLASS_2_X_8),
        eImageClass1X8 = GLenum(GL_IMAGE_CLASS_1_X_8),
        eImageClass111110 = GLenum(GL_IMAGE_CLASS_11_11_10),
        eImageClass1010102 = GLenum(GL_IMAGE_CLASS_10_10_10_2),
        eViewClass128Bits = GLenum(GL_VIEW_CLASS_128_BITS),
        eViewClass96Bits = GLenum(GL_VIEW_CLASS_96_BITS),
        eViewClass64Bits = GLenum(GL_VIEW_CLASS_64_BITS),
        eViewClass48Bits = GLenum(GL_VIEW_CLASS_48_BITS),
        eViewClass32Bits = GLenum(GL_VIEW_CLASS_32_BITS),
        eViewClass24Bits = GLenum(GL_VIEW_CLASS_24_BITS),
        eViewClass16Bits = GLenum(GL_VIEW_CLASS_16_BITS),
        eViewClass8Bits = GLenum(GL_VIEW_CLASS_8_BITS),
        eViewClassS3tcDxt1Rgb = GLenum(GL_VIEW_CLASS_S3TC_DXT1_RGB),
        eViewClassS3tcDxt1Rgba = GLenum(GL_VIEW_CLASS_S3TC_DXT1_RGBA),
        eViewClassS3tcDxt3Rgba = GLenum(GL_VIEW_CLASS_S3TC_DXT3_RGBA),
        eViewClassS3tcDxt5Rgba = GLenum(GL_VIEW_CLASS_S3TC_DXT5_RGBA),
        eViewClassRgtc1Red = GLenum(GL_VIEW_CLASS_RGTC1_RED),
        eViewClassRgtc2Rg = GLenum(GL_VIEW_CLASS_RGTC2_RG),
        eViewClassBptcUnorm = GLenum(GL_VIEW_CLASS_BPTC_UNORM),
        eViewClassBptcFloat = GLenum(GL_VIEW_CLASS_BPTC_FLOAT),
        eTextureViewMinLevel = GLenum(GL_TEXTURE_VIEW_MIN_LEVEL),
        eTextureViewNumLevels = GLenum(GL_TEXTURE_VIEW_NUM_LEVELS),
        eTextureViewMinLayer = GLenum(GL_TEXTURE_VIEW_MIN_LAYER),
        eTextureViewNumLayers = GLenum(GL_TEXTURE_VIEW_NUM_LAYERS),
        eTextureImmutableLevels = GLenum(GL_TEXTURE_IMMUTABLE_LEVELS),
        eMaxVertexAttribStride = GLenum(GL_MAX_VERTEX_ATTRIB_STRIDE),
        eDisplayList = GLenum(GL_DISPLAY_LIST),
        eNumShadingLanguageVersions = GLenum(GL_NUM_SHADING_LANGUAGE_VERSIONS),
        eMaxCullDistances = GLenum(GL_MAX_CULL_DISTANCES),
        eMaxCombinedClipAndCullDistances = GLenum(GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES),
        eContextReleaseBehavior = GLenum(GL_CONTEXT_RELEASE_BEHAVIOR),
        eContextReleaseBehaviorFlush = GLenum(GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH),
        eVertexProgramPointSize = GLenum(GL_VERTEX_PROGRAM_POINT_SIZE),
        eTextureCompressedImageSize = GLenum(GL_TEXTURE_COMPRESSED_IMAGE_SIZE),
        eMirrorClampToEdge = GLenum(GL_MIRROR_CLAMP_TO_EDGE),
        eDrawBuffer0 = GLenum(GL_DRAW_BUFFER0),
        eDrawBuffer1 = GLenum(GL_DRAW_BUFFER1),
        eDrawBuffer2 = GLenum(GL_DRAW_BUFFER2),
        eDrawBuffer3 = GLenum(GL_DRAW_BUFFER3),
        eDrawBuffer4 = GLenum(GL_DRAW_BUFFER4),
        eDrawBuffer5 = GLenum(GL_DRAW_BUFFER5),
        eDrawBuffer6 = GLenum(GL_DRAW_BUFFER6),
        eDrawBuffer7 = GLenum(GL_DRAW_BUFFER7),
        eDrawBuffer8 = GLenum(GL_DRAW_BUFFER8),
        eDrawBuffer9 = GLenum(GL_DRAW_BUFFER9),
        eDrawBuffer10 = GLenum(GL_DRAW_BUFFER10),
        eDrawBuffer11 = GLenum(GL_DRAW_BUFFER11),
        eDrawBuffer12 = GLenum(GL_DRAW_BUFFER12),
        eDrawBuffer13 = GLenum(GL_DRAW_BUFFER13),
        eDrawBuffer14 = GLenum(GL_DRAW_BUFFER14),
        eDrawBuffer15 = GLenum(GL_DRAW_BUFFER15),
        eTextureDepthSize = GLenum(GL_TEXTURE_DEPTH_SIZE),
        eMaxTessControlInputComponents = GLenum(GL_MAX_TESS_CONTROL_INPUT_COMPONENTS),
        eMaxTessEvaluationInputComponents = GLenum(GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS),
        eGeometryShaderInvocations = GLenum(GL_GEOMETRY_SHADER_INVOCATIONS),
        eTextureStencilSize = GLenum(GL_TEXTURE_STENCIL_SIZE),
        eTextureRedType = GLenum(GL_TEXTURE_RED_TYPE),
        eTextureGreenType = GLenum(GL_TEXTURE_GREEN_TYPE),
        eTextureBlueType = GLenum(GL_TEXTURE_BLUE_TYPE),
        eTextureAlphaType = GLenum(GL_TEXTURE_ALPHA_TYPE),
        eTextureDepthType = GLenum(GL_TEXTURE_DEPTH_TYPE),
        eUnsignedNormalized = GLenum(GL_UNSIGNED_NORMALIZED),
        eTextureBufferBinding = GLenum(GL_TEXTURE_BUFFER_BINDING),
        eTextureBufferDataStoreBinding = GLenum(GL_TEXTURE_BUFFER_DATA_STORE_BINDING),
        eMinSampleShadingValue = GLenum(GL_MIN_SAMPLE_SHADING_VALUE),
        eTextureSharedSize = GLenum(GL_TEXTURE_SHARED_SIZE),
        eMaxTransformFeedbackSeparateComponents = GLenum(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS),
        eMaxTransformFeedbackInterleavedComponents = GLenum(GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS),
        eMaxTransformFeedbackSeparateAttribs = GLenum(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS),
        ePointSpriteCoordOrigin = GLenum(GL_POINT_SPRITE_COORD_ORIGIN),
        eFramebufferBinding = GLenum(GL_FRAMEBUFFER_BINDING),
        eMaxSamples = GLenum(GL_MAX_SAMPLES),
        eMaxGeometryOutputVertices = GLenum(GL_MAX_GEOMETRY_OUTPUT_VERTICES),
        eMaxGeometryTotalOutputComponents = GLenum(GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS),
        eMaxSubroutines = GLenum(GL_MAX_SUBROUTINES),
        eMaxSubroutineUniformLocations = GLenum(GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS),
        eMaxCombinedTessControlUniformComponents = GLenum(GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS),
        eMaxCombinedTessEvaluationUniformComponents = GLenum(GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS),
        eTransformFeedbackBufferPaused = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED),
        eTransformFeedbackBufferActive = GLenum(GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE),
        eTransformFeedbackBinding = GLenum(GL_TRANSFORM_FEEDBACK_BINDING),
        eQuadsFollowProvokingVertexConvention = GLenum(GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION),
        eSampleMaskValue = GLenum(GL_SAMPLE_MASK_VALUE),
        eMaxGeometryShaderInvocations = GLenum(GL_MAX_GEOMETRY_SHADER_INVOCATIONS),
        eMinFragmentInterpolationOffset = GLenum(GL_MIN_FRAGMENT_INTERPOLATION_OFFSET),
        eMaxFragmentInterpolationOffset = GLenum(GL_MAX_FRAGMENT_INTERPOLATION_OFFSET),
        eFragmentInterpolationOffsetBits = GLenum(GL_FRAGMENT_INTERPOLATION_OFFSET_BITS),
        eMinProgramTextureGatherOffset = GLenum(GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET),
        eMaxProgramTextureGatherOffset = GLenum(GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET),
        eMaxTransformFeedbackBuffers = GLenum(GL_MAX_TRANSFORM_FEEDBACK_BUFFERS),
        eMaxVertexStreams = GLenum(GL_MAX_VERTEX_STREAMS),
        eTessControlOutputVertices = GLenum(GL_TESS_CONTROL_OUTPUT_VERTICES),
        eTessGenMode = GLenum(GL_TESS_GEN_MODE),
        eTessGenSpacing = GLenum(GL_TESS_GEN_SPACING),
        eTessGenVertexOrder = GLenum(GL_TESS_GEN_VERTEX_ORDER),
        eTessGenPointMode = GLenum(GL_TESS_GEN_POINT_MODE),
        eIsolines = GLenum(GL_ISOLINES),
        eFractionalOdd = GLenum(GL_FRACTIONAL_ODD),
        eFractionalEven = GLenum(GL_FRACTIONAL_EVEN),
        eMaxPatchVertices = GLenum(GL_MAX_PATCH_VERTICES),
        eMaxTessGenLevel = GLenum(GL_MAX_TESS_GEN_LEVEL),
        eMaxTessControlUniformComponents = GLenum(GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS),
        eMaxTessEvaluationUniformComponents = GLenum(GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS),
        eMaxTessControlTextureImageUnits = GLenum(GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS),
        eMaxTessEvaluationTextureImageUnits = GLenum(GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS),
        eMaxTessControlOutputComponents = GLenum(GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS),
        eMaxTessPatchComponents = GLenum(GL_MAX_TESS_PATCH_COMPONENTS),
        eMaxTessControlTotalOutputComponents = GLenum(GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS),
        eMaxTessEvaluationOutputComponents = GLenum(GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS),
        eCopyReadBufferBinding = GLenum(GL_COPY_READ_BUFFER_BINDING),
        eCopyWriteBufferBinding = GLenum(GL_COPY_WRITE_BUFFER_BINDING),
        eMaxImageUnits = GLenum(GL_MAX_IMAGE_UNITS),
        eMaxCombinedImageUnitsAndFragmentOutputs = GLenum(GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS),
        eMaxCombinedShaderOutputResources = GLenum(GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES),
        eImageBindingName = GLenum(GL_IMAGE_BINDING_NAME),
        eImageBindingLevel = GLenum(GL_IMAGE_BINDING_LEVEL),
        eImageBindingLayered = GLenum(GL_IMAGE_BINDING_LAYERED),
        eImageBindingLayer = GLenum(GL_IMAGE_BINDING_LAYER),
        eImageBindingAccess = GLenum(GL_IMAGE_BINDING_ACCESS),
        eDrawIndirectBufferBinding = GLenum(GL_DRAW_INDIRECT_BUFFER_BINDING),
        eVertexBindingBuffer = GLenum(GL_VERTEX_BINDING_BUFFER),
        eSignedNormalized = GLenum(GL_SIGNED_NORMALIZED),
        eTextureBindingCubeMapArray = GLenum(GL_TEXTURE_BINDING_CUBE_MAP_ARRAY),
        eMaxImageSamples = GLenum(GL_MAX_IMAGE_SAMPLES),
        eImageBindingFormat = GLenum(GL_IMAGE_BINDING_FORMAT),
        eImageFormatCompatibilityBySize = GLenum(GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE),
        eImageFormatCompatibilityByClass = GLenum(GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS),
        eMaxVertexImageUniforms = GLenum(GL_MAX_VERTEX_IMAGE_UNIFORMS),
        eMaxTessControlImageUniforms = GLenum(GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS),
        eMaxTessEvaluationImageUniforms = GLenum(GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS),
        eMaxGeometryImageUniforms = GLenum(GL_MAX_GEOMETRY_IMAGE_UNIFORMS),
        eMaxFragmentImageUniforms = GLenum(GL_MAX_FRAGMENT_IMAGE_UNIFORMS),
        eMaxCombinedImageUniforms = GLenum(GL_MAX_COMBINED_IMAGE_UNIFORMS),
        eMaxShaderStorageBlockSize = GLenum(GL_MAX_SHADER_STORAGE_BLOCK_SIZE),
        eTextureSamples = GLenum(GL_TEXTURE_SAMPLES),
        eTextureFixedSampleLocations = GLenum(GL_TEXTURE_FIXED_SAMPLE_LOCATIONS),
        eSyncFence = GLenum(GL_SYNC_FENCE),
        eUnsignaled = GLenum(GL_UNSIGNALED),
        eSignaled = GLenum(GL_SIGNALED),
        eUnpackCompressedBlockWidth = GLenum(GL_UNPACK_COMPRESSED_BLOCK_WIDTH),
        eUnpackCompressedBlockHeight = GLenum(GL_UNPACK_COMPRESSED_BLOCK_HEIGHT),
        eUnpackCompressedBlockDepth = GLenum(GL_UNPACK_COMPRESSED_BLOCK_DEPTH),
        eUnpackCompressedBlockSize = GLenum(GL_UNPACK_COMPRESSED_BLOCK_SIZE),
        ePackCompressedBlockWidth = GLenum(GL_PACK_COMPRESSED_BLOCK_WIDTH),
        ePackCompressedBlockHeight = GLenum(GL_PACK_COMPRESSED_BLOCK_HEIGHT),
        ePackCompressedBlockDepth = GLenum(GL_PACK_COMPRESSED_BLOCK_DEPTH),
        ePackCompressedBlockSize = GLenum(GL_PACK_COMPRESSED_BLOCK_SIZE),
        eTextureImmutableFormat = GLenum(GL_TEXTURE_IMMUTABLE_FORMAT),
        eMaxDebugMessageLength = GLenum(GL_MAX_DEBUG_MESSAGE_LENGTH),
        eMaxDebugLoggedMessages = GLenum(GL_MAX_DEBUG_LOGGED_MESSAGES),
        eDebugLoggedMessages = GLenum(GL_DEBUG_LOGGED_MESSAGES),
        eQueryBufferBinding = GLenum(GL_QUERY_BUFFER_BINDING),
        eTextureBufferOffset = GLenum(GL_TEXTURE_BUFFER_OFFSET),
        eTextureBufferSize = GLenum(GL_TEXTURE_BUFFER_SIZE),
        eMaxComputeImageUniforms = GLenum(GL_MAX_COMPUTE_IMAGE_UNIFORMS),
        eAtomicCounterBufferStart = GLenum(GL_ATOMIC_COUNTER_BUFFER_START),
        eAtomicCounterBufferSize = GLenum(GL_ATOMIC_COUNTER_BUFFER_SIZE),
        eMaxVertexAtomicCounterBuffers = GLenum(GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS),
        eMaxTessControlAtomicCounterBuffers = GLenum(GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS),
        eMaxTessEvaluationAtomicCounterBuffers = GLenum(GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS),
        eMaxGeometryAtomicCounterBuffers = GLenum(GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS),
        eMaxFragmentAtomicCounterBuffers = GLenum(GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS),
        eMaxCombinedAtomicCounterBuffers = GLenum(GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS),
        eMaxAtomicCounterBufferSize = GLenum(GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE),
        eUnsignedIntAtomicCounter = GLenum(GL_UNSIGNED_INT_ATOMIC_COUNTER),
        eMaxAtomicCounterBufferBindings = GLenum(GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS),
        eClipOrigin = GLenum(GL_CLIP_ORIGIN),
        eClipDepthMode = GLenum(GL_CLIP_DEPTH_MODE),
    };
    enum class CombinerPortionNV : GLenum {
        eAlpha = GLenum(GL_ALPHA),
        eRgb = GLenum(GL_RGB),
    };
    enum class ScalarType : GLenum {
        eUnsignedByte = GLenum(GL_UNSIGNED_BYTE),
        eUnsignedShort = GLenum(GL_UNSIGNED_SHORT),
        eUnsignedInt = GLenum(GL_UNSIGNED_INT),
    };
    enum class StringName : GLenum {
        eVendor = GLenum(GL_VENDOR),
        eRenderer = GLenum(GL_RENDERER),
        eVersion = GLenum(GL_VERSION),
        eExtensions = GLenum(GL_EXTENSIONS),
        eShadingLanguageVersion = GLenum(GL_SHADING_LANGUAGE_VERSION),
    };
    enum class BlitFramebufferFilter : GLenum {
        eNearest = GLenum(GL_NEAREST),
        eLinear = GLenum(GL_LINEAR),
    };
    enum class TextureWrapMode : GLenum {
        eLinearMipmapLinear = GLenum(GL_LINEAR_MIPMAP_LINEAR),
        eRepeat = GLenum(GL_REPEAT),
        eClampToBorder = GLenum(GL_CLAMP_TO_BORDER),
        eClampToEdge = GLenum(GL_CLAMP_TO_EDGE),
        eMirroredRepeat = GLenum(GL_MIRRORED_REPEAT),
    };
    enum class SamplerParameterI : GLenum {
        eTextureMagFilter = GLenum(GL_TEXTURE_MAG_FILTER),
        eTextureMinFilter = GLenum(GL_TEXTURE_MIN_FILTER),
        eTextureWrapS = GLenum(GL_TEXTURE_WRAP_S),
        eTextureWrapT = GLenum(GL_TEXTURE_WRAP_T),
        eTextureWrapR = GLenum(GL_TEXTURE_WRAP_R),
        eTextureCompareMode = GLenum(GL_TEXTURE_COMPARE_MODE),
        eTextureCompareFunc = GLenum(GL_TEXTURE_COMPARE_FUNC),
    };
    enum class VertexProvokingMode : GLenum {
        eFirstVertexConvention = GLenum(GL_FIRST_VERTEX_CONVENTION),
        eLastVertexConvention = GLenum(GL_LAST_VERTEX_CONVENTION),
    };
    enum class SeparableTargetEXT : GLenum {
        eSeparable2d = GLenum(GL_SEPARABLE_2D),
    };
    enum class FramebufferAttachmentParameterName : GLenum {
        eFramebufferAttachmentColorEncoding = GLenum(GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING),
        eFramebufferAttachmentComponentType = GLenum(GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE),
        eFramebufferAttachmentRedSize = GLenum(GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE),
        eFramebufferAttachmentGreenSize = GLenum(GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE),
        eFramebufferAttachmentBlueSize = GLenum(GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE),
        eFramebufferAttachmentAlphaSize = GLenum(GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE),
        eFramebufferAttachmentDepthSize = GLenum(GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE),
        eFramebufferAttachmentStencilSize = GLenum(GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE),
        eFramebufferAttachmentObjectType = GLenum(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE),
        eFramebufferAttachmentObjectName = GLenum(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME),
        eFramebufferAttachmentTextureLevel = GLenum(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL),
        eFramebufferAttachmentTextureCubeMapFace = GLenum(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE),
        eFramebufferAttachmentTextureLayer = GLenum(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER),
        eFramebufferAttachmentLayered = GLenum(GL_FRAMEBUFFER_ATTACHMENT_LAYERED),
    };
    enum class PatchParameterName : GLenum {
        ePatchVertices = GLenum(GL_PATCH_VERTICES),
        ePatchDefaultInnerLevel = GLenum(GL_PATCH_DEFAULT_INNER_LEVEL),
        ePatchDefaultOuterLevel = GLenum(GL_PATCH_DEFAULT_OUTER_LEVEL),
    };
    enum class GetMultisamplePNameNV : GLenum {
        eSamplePosition = GLenum(GL_SAMPLE_POSITION),
    };
    enum class HistogramTarget : GLenum {
        eHistogram = GLenum(GL_HISTOGRAM),
        eProxyHistogram = GLenum(GL_PROXY_HISTOGRAM),
    };
    enum class HistogramTargetEXT : GLenum {
        eHistogram = GLenum(GL_HISTOGRAM),
        eProxyHistogram = GLenum(GL_PROXY_HISTOGRAM),
    };
    enum class ColorTableTarget : GLenum {
        eColorTable = GLenum(GL_COLOR_TABLE),
        ePostConvolutionColorTable = GLenum(GL_POST_CONVOLUTION_COLOR_TABLE),
        ePostColorMatrixColorTable = GLenum(GL_POST_COLOR_MATRIX_COLOR_TABLE),
        eProxyColorTable = GLenum(GL_PROXY_COLOR_TABLE),
        eProxyPostConvolutionColorTable = GLenum(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE),
        eProxyPostColorMatrixColorTable = GLenum(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE),
    };
    enum class BufferAccessARB : GLenum {
        eReadOnly = GLenum(GL_READ_ONLY),
        eWriteOnly = GLenum(GL_WRITE_ONLY),
        eReadWrite = GLenum(GL_READ_WRITE),
    };
    enum class UseProgramStageMask : GLenum {
        eVertexShaderBit = GLenum(GL_VERTEX_SHADER_BIT),
        eFragmentShaderBit = GLenum(GL_FRAGMENT_SHADER_BIT),
        eGeometryShaderBit = GLenum(GL_GEOMETRY_SHADER_BIT),
        eTessControlShaderBit = GLenum(GL_TESS_CONTROL_SHADER_BIT),
        eTessEvaluationShaderBit = GLenum(GL_TESS_EVALUATION_SHADER_BIT),
        eComputeShaderBit = GLenum(GL_COMPUTE_SHADER_BIT),
        eAllShaderBits = GLenum(GL_ALL_SHADER_BITS),
    };
    enum class PointParameterNameARB : GLenum {
        ePointFadeThresholdSize = GLenum(GL_POINT_FADE_THRESHOLD_SIZE),
    };
    enum class FramebufferStatus : GLenum {
        eFramebufferUndefined = GLenum(GL_FRAMEBUFFER_UNDEFINED),
        eFramebufferComplete = GLenum(GL_FRAMEBUFFER_COMPLETE),
        eFramebufferIncompleteAttachment = GLenum(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT),
        eFramebufferIncompleteMissingAttachment = GLenum(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT),
        eFramebufferIncompleteDrawBuffer = GLenum(GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER),
        eFramebufferIncompleteReadBuffer = GLenum(GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER),
        eFramebufferUnsupported = GLenum(GL_FRAMEBUFFER_UNSUPPORTED),
        eFramebufferIncompleteMultisample = GLenum(GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE),
        eFramebufferIncompleteLayerTargets = GLenum(GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS),
    };
    enum class MeshMode2 : GLenum {
        ePoint = GLenum(GL_POINT),
        eLine = GLenum(GL_LINE),
        eFill = GLenum(GL_FILL),
    };
    enum class FramebufferAttachment : GLenum {
        eDepthStencilAttachment = GLenum(GL_DEPTH_STENCIL_ATTACHMENT),
        eColorAttachment0 = GLenum(GL_COLOR_ATTACHMENT0),
        eColorAttachment1 = GLenum(GL_COLOR_ATTACHMENT1),
        eColorAttachment2 = GLenum(GL_COLOR_ATTACHMENT2),
        eColorAttachment3 = GLenum(GL_COLOR_ATTACHMENT3),
        eColorAttachment4 = GLenum(GL_COLOR_ATTACHMENT4),
        eColorAttachment5 = GLenum(GL_COLOR_ATTACHMENT5),
        eColorAttachment6 = GLenum(GL_COLOR_ATTACHMENT6),
        eColorAttachment7 = GLenum(GL_COLOR_ATTACHMENT7),
        eColorAttachment8 = GLenum(GL_COLOR_ATTACHMENT8),
        eColorAttachment9 = GLenum(GL_COLOR_ATTACHMENT9),
        eColorAttachment10 = GLenum(GL_COLOR_ATTACHMENT10),
        eColorAttachment11 = GLenum(GL_COLOR_ATTACHMENT11),
        eColorAttachment12 = GLenum(GL_COLOR_ATTACHMENT12),
        eColorAttachment13 = GLenum(GL_COLOR_ATTACHMENT13),
        eColorAttachment14 = GLenum(GL_COLOR_ATTACHMENT14),
        eColorAttachment15 = GLenum(GL_COLOR_ATTACHMENT15),
        eColorAttachment16 = GLenum(GL_COLOR_ATTACHMENT16),
        eColorAttachment17 = GLenum(GL_COLOR_ATTACHMENT17),
        eColorAttachment18 = GLenum(GL_COLOR_ATTACHMENT18),
        eColorAttachment19 = GLenum(GL_COLOR_ATTACHMENT19),
        eColorAttachment20 = GLenum(GL_COLOR_ATTACHMENT20),
        eColorAttachment21 = GLenum(GL_COLOR_ATTACHMENT21),
        eColorAttachment22 = GLenum(GL_COLOR_ATTACHMENT22),
        eColorAttachment23 = GLenum(GL_COLOR_ATTACHMENT23),
        eColorAttachment24 = GLenum(GL_COLOR_ATTACHMENT24),
        eColorAttachment25 = GLenum(GL_COLOR_ATTACHMENT25),
        eColorAttachment26 = GLenum(GL_COLOR_ATTACHMENT26),
        eColorAttachment27 = GLenum(GL_COLOR_ATTACHMENT27),
        eColorAttachment28 = GLenum(GL_COLOR_ATTACHMENT28),
        eColorAttachment29 = GLenum(GL_COLOR_ATTACHMENT29),
        eColorAttachment30 = GLenum(GL_COLOR_ATTACHMENT30),
        eColorAttachment31 = GLenum(GL_COLOR_ATTACHMENT31),
        eDepthAttachment = GLenum(GL_DEPTH_ATTACHMENT),
        eStencilAttachment = GLenum(GL_STENCIL_ATTACHMENT),
    };
    enum class BufferPNameARB : GLenum {
        eBufferImmutableStorage = GLenum(GL_BUFFER_IMMUTABLE_STORAGE),
        eBufferStorageFlags = GLenum(GL_BUFFER_STORAGE_FLAGS),
        eBufferSize = GLenum(GL_BUFFER_SIZE),
        eBufferUsage = GLenum(GL_BUFFER_USAGE),
        eBufferAccess = GLenum(GL_BUFFER_ACCESS),
        eBufferMapped = GLenum(GL_BUFFER_MAPPED),
        eBufferAccessFlags = GLenum(GL_BUFFER_ACCESS_FLAGS),
        eBufferMapLength = GLenum(GL_BUFFER_MAP_LENGTH),
        eBufferMapOffset = GLenum(GL_BUFFER_MAP_OFFSET),
    };
    inline void GetnMinmax(enum MinmaxTarget target, enum Boolean reset, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * values){
        glGetnMinmax((GLenum)target, (GLboolean)reset, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)values);
    }
    inline void GetnSeparableFilter(enum SeparableTarget target, enum PixelFormat format, enum PixelType type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span){
        glGetnSeparableFilter((GLenum)target, (GLenum)format, (GLenum)type, (GLsizei)rowBufSize, (void *)row, (GLsizei)columnBufSize, (void *)column, (void *)span);
    }
    inline void GetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values){
        glGetnPixelMapusv((GLenum)map, (GLsizei)bufSize, (GLushort *)values);
    }
    inline void GetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v){
        glGetnMapfv((GLenum)target, (GLenum)query, (GLsizei)bufSize, (GLfloat *)v);
    }
    inline void GetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v){
        glGetnMapdv((GLenum)target, (GLenum)query, (GLsizei)bufSize, (GLdouble *)v);
    }
    inline void ReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * data){
        glReadnPixels((GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)data);
    }
    inline void GetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params){
        glGetnUniformiv((GLuint)program, (GLint)location, (GLsizei)bufSize, (GLint *)params);
    }
    inline void GetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params){
        glGetnUniformdv((GLuint)program, (GLint)location, (GLsizei)bufSize, (GLdouble *)params);
    }
    inline void GetnTexImage(enum TextureTarget target, GLint level, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * pixels){
        glGetnTexImage((GLenum)target, (GLint)level, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)pixels);
    }
    inline void GetnCompressedTexImage(enum TextureTarget target, GLint lod, GLsizei bufSize, void * pixels){
        glGetnCompressedTexImage((GLenum)target, (GLint)lod, (GLsizei)bufSize, (void *)pixels);
    }
    inline void GetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels){
        glGetCompressedTextureSubImage((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLsizei)bufSize, (void *)pixels);
    }
    inline void GetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * pixels){
        glGetTextureSubImage((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)pixels);
    }
    inline void GetQueryBufferObjectiv(GLuint id, GLuint buffer, enum QueryObjectParameterName pname, GLintptr offset){
        glGetQueryBufferObjectiv((GLuint)id, (GLuint)buffer, (GLenum)pname, (GLintptr)offset);
    }
    inline void CreateQueries(enum QueryTarget target, GLsizei n, GLuint * ids){
        glCreateQueries((GLenum)target, (GLsizei)n, (GLuint *)ids);
    }
    inline void CreateProgramPipelines(GLsizei n, GLuint * pipelines){
        glCreateProgramPipelines((GLsizei)n, (GLuint *)pipelines);
    }
    inline void CreateSamplers(GLsizei n, GLuint * samplers){
        glCreateSamplers((GLsizei)n, (GLuint *)samplers);
    }
    inline void GetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, enum VertexArrayPName pname, GLint64 * param){
        glGetVertexArrayIndexed64iv((GLuint)vaobj, (GLuint)index, (GLenum)pname, (GLint64 *)param);
    }
    inline void GetQueryBufferObjecti64v(GLuint id, GLuint buffer, enum QueryObjectParameterName pname, GLintptr offset){
        glGetQueryBufferObjecti64v((GLuint)id, (GLuint)buffer, (GLenum)pname, (GLintptr)offset);
    }
    inline void VertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, enum VertexAttribIType type, GLuint relativeoffset){
        glVertexArrayAttribIFormat((GLuint)vaobj, (GLuint)attribindex, (GLint)size, (GLenum)type, (GLuint)relativeoffset);
    }
    inline void VertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, enum VertexAttribType type, enum Boolean normalized, GLuint relativeoffset){
        glVertexArrayAttribFormat((GLuint)vaobj, (GLuint)attribindex, (GLint)size, (GLenum)type, (GLboolean)normalized, (GLuint)relativeoffset);
    }
    inline void VertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex){
        glVertexArrayAttribBinding((GLuint)vaobj, (GLuint)attribindex, (GLuint)bindingindex);
    }
    inline void VertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides){
        glVertexArrayVertexBuffers((GLuint)vaobj, (GLuint)first, (GLsizei)count, (const GLuint *)buffers, (const GLintptr *)offsets, (const GLsizei *)strides);
    }
    inline void VertexArrayElementBuffer(GLuint vaobj, GLuint buffer){
        glVertexArrayElementBuffer((GLuint)vaobj, (GLuint)buffer);
    }
    inline void EnableVertexArrayAttrib(GLuint vaobj, GLuint index){
        glEnableVertexArrayAttrib((GLuint)vaobj, (GLuint)index);
    }
    inline void DisableVertexArrayAttrib(GLuint vaobj, GLuint index){
        glDisableVertexArrayAttrib((GLuint)vaobj, (GLuint)index);
    }
    inline void GetTextureParameteriv(GLuint texture, enum GetTextureParameter pname, GLint * params){
        glGetTextureParameteriv((GLuint)texture, (GLenum)pname, (GLint *)params);
    }
    inline void GetTextureParameterIuiv(GLuint texture, enum GetTextureParameter pname, GLuint * params){
        glGetTextureParameterIuiv((GLuint)texture, (GLenum)pname, (GLuint *)params);
    }
    inline void GetTextureParameterIiv(GLuint texture, enum GetTextureParameter pname, GLint * params){
        glGetTextureParameterIiv((GLuint)texture, (GLenum)pname, (GLint *)params);
    }
    inline void GetTextureParameterfv(GLuint texture, enum GetTextureParameter pname, GLfloat * params){
        glGetTextureParameterfv((GLuint)texture, (GLenum)pname, (GLfloat *)params);
    }
    inline void GetTextureLevelParameterfv(GLuint texture, GLint level, enum GetTextureParameter pname, GLfloat * params){
        glGetTextureLevelParameterfv((GLuint)texture, (GLint)level, (GLenum)pname, (GLfloat *)params);
    }
    inline void GetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params){
        glGetnUniformfv((GLuint)program, (GLint)location, (GLsizei)bufSize, (GLfloat *)params);
    }
    inline void GetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels){
        glGetCompressedTextureImage((GLuint)texture, (GLint)level, (GLsizei)bufSize, (void *)pixels);
    }
    inline void GetTextureImage(GLuint texture, GLint level, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * pixels){
        glGetTextureImage((GLuint)texture, (GLint)level, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)pixels);
    }
    inline void BindTextureUnit(GLuint unit, GLuint texture){
        glBindTextureUnit((GLuint)unit, (GLuint)texture);
    }
    inline void GenerateTextureMipmap(GLuint texture){
        glGenerateTextureMipmap((GLuint)texture);
    }
    inline void TextureParameteriv(GLuint texture, enum TextureParameterName pname, const GLint * param){
        glTextureParameteriv((GLuint)texture, (GLenum)pname, (const GLint *)param);
    }
    inline void TextureParameteri(GLuint texture, enum TextureParameterName pname, GLint param){
        glTextureParameteri((GLuint)texture, (GLenum)pname, (GLint)param);
    }
    inline void TextureParameterfv(GLuint texture, enum TextureParameterName pname, const GLfloat * param){
        glTextureParameterfv((GLuint)texture, (GLenum)pname, (const GLfloat *)param);
    }
    inline void TextureParameterf(GLuint texture, enum TextureParameterName pname, GLfloat param){
        glTextureParameterf((GLuint)texture, (GLenum)pname, (GLfloat)param);
    }
    inline void CopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){
        glCopyTextureSubImage3D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void CopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){
        glCopyTextureSubImage2D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void CopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){
        glCopyTextureSubImage1D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)x, (GLint)y, (GLsizei)width);
    }
    inline void CompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, enum InternalFormat format, GLsizei imageSize, const void * data){
        glCompressedTextureSubImage1D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLsizei)width, (GLenum)format, (GLsizei)imageSize, (const void *)data);
    }
    inline void TextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTextureSubImage3D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void TextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTextureSubImage1D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLsizei)width, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void TextureStorage3DMultisample(GLuint texture, GLsizei samples, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height, GLsizei depth, enum Boolean fixedsamplelocations){
        glTextureStorage3DMultisample((GLuint)texture, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLboolean)fixedsamplelocations);
    }
    inline void TextureStorage2DMultisample(GLuint texture, GLsizei samples, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height, enum Boolean fixedsamplelocations){
        glTextureStorage2DMultisample((GLuint)texture, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLboolean)fixedsamplelocations);
    }
    inline void TextureStorage3D(GLuint texture, GLsizei levels, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height, GLsizei depth){
        glTextureStorage3D((GLuint)texture, (GLsizei)levels, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth);
    }
    inline void TextureStorage2D(GLuint texture, GLsizei levels, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height){
        glTextureStorage2D((GLuint)texture, (GLsizei)levels, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);
    }
    inline void TextureStorage1D(GLuint texture, GLsizei levels, enum SizedInternalFormat internalformat, GLsizei width){
        glTextureStorage1D((GLuint)texture, (GLsizei)levels, (GLenum)internalformat, (GLsizei)width);
    }
    inline void TextureBufferRange(GLuint texture, enum SizedInternalFormat internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){
        glTextureBufferRange((GLuint)texture, (GLenum)internalformat, (GLuint)buffer, (GLintptr)offset, (GLsizeiptr)size);
    }
    inline void TextureBuffer(GLuint texture, enum SizedInternalFormat internalformat, GLuint buffer){
        glTextureBuffer((GLuint)texture, (GLenum)internalformat, (GLuint)buffer);
    }
    inline void CreateTextures(enum TextureTarget target, GLsizei n, GLuint * textures){
        glCreateTextures((GLenum)target, (GLsizei)n, (GLuint *)textures);
    }
    inline void GetNamedRenderbufferParameteriv(GLuint renderbuffer, enum RenderbufferParameterName pname, GLint * params){
        glGetNamedRenderbufferParameteriv((GLuint)renderbuffer, (GLenum)pname, (GLint *)params);
    }
    inline void GetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, enum FramebufferAttachment attachment, enum FramebufferAttachmentParameterName pname, GLint * params){
        glGetNamedFramebufferAttachmentParameteriv((GLuint)framebuffer, (GLenum)attachment, (GLenum)pname, (GLint *)params);
    }
    inline GLenum CheckNamedFramebufferStatus(GLuint framebuffer, enum FramebufferTarget target){
        return glCheckNamedFramebufferStatus((GLuint)framebuffer, (GLenum)target);
    }
    inline void ClearNamedFramebufferfi(GLuint framebuffer, enum BufferBit buffer, GLint drawbuffer, GLfloat depth, GLint stencil){
        glClearNamedFramebufferfi((GLuint)framebuffer, (GLenum)buffer, (GLint)drawbuffer, (GLfloat)depth, (GLint)stencil);
    }
    inline void ClearNamedFramebufferfv(GLuint framebuffer, enum BufferBit buffer, GLint drawbuffer, const GLfloat * value){
        glClearNamedFramebufferfv((GLuint)framebuffer, (GLenum)buffer, (GLint)drawbuffer, (const GLfloat *)value);
    }
    inline void InvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const FramebufferAttachment * attachments, GLint x, GLint y, GLsizei width, GLsizei height){
        glInvalidateNamedFramebufferSubData((GLuint)framebuffer, (GLsizei)numAttachments, (const GLenum *)attachments, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void NamedFramebufferReadBuffer(GLuint framebuffer, enum ColorBuffer src){
        glNamedFramebufferReadBuffer((GLuint)framebuffer, (GLenum)src);
    }
    inline void NamedFramebufferTextureLayer(GLuint framebuffer, enum FramebufferAttachment attachment, GLuint texture, GLint level, GLint layer){
        glNamedFramebufferTextureLayer((GLuint)framebuffer, (GLenum)attachment, (GLuint)texture, (GLint)level, (GLint)layer);
    }
    inline void NamedFramebufferTexture(GLuint framebuffer, enum FramebufferAttachment attachment, GLuint texture, GLint level){
        glNamedFramebufferTexture((GLuint)framebuffer, (GLenum)attachment, (GLuint)texture, (GLint)level);
    }
    inline void NamedFramebufferParameteri(GLuint framebuffer, enum FramebufferParameterName pname, GLint param){
        glNamedFramebufferParameteri((GLuint)framebuffer, (GLenum)pname, (GLint)param);
    }
    inline void GetNamedBufferParameteriv(GLuint buffer, enum BufferPNameARB pname, GLint * params){
        glGetNamedBufferParameteriv((GLuint)buffer, (GLenum)pname, (GLint *)params);
    }
    inline GLboolean UnmapNamedBuffer(GLuint buffer){
        return glUnmapNamedBuffer((GLuint)buffer);
    }
    inline void GetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params){
        glGetnUniformuiv((GLuint)program, (GLint)location, (GLsizei)bufSize, (GLuint *)params);
    }
    inline void * MapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, enum MapBufferAccessMask access){
        return glMapNamedBufferRange((GLuint)buffer, (GLintptr)offset, (GLsizeiptr)length, (GLbitfield)access);
    }
    inline void * MapNamedBuffer(GLuint buffer, enum BufferAccessARB access){
        return glMapNamedBuffer((GLuint)buffer, (GLenum)access);
    }
    inline void GetQueryBufferObjectui64v(GLuint id, GLuint buffer, enum QueryObjectParameterName pname, GLintptr offset){
        glGetQueryBufferObjectui64v((GLuint)id, (GLuint)buffer, (GLenum)pname, (GLintptr)offset);
    }
    inline void ClearNamedBufferData(GLuint buffer, enum SizedInternalFormat internalformat, enum PixelFormat format, enum PixelType type, const void * data){
        glClearNamedBufferData((GLuint)buffer, (GLenum)internalformat, (GLenum)format, (GLenum)type, (const void *)data);
    }
    inline void CopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){
        glCopyNamedBufferSubData((GLuint)readBuffer, (GLuint)writeBuffer, (GLintptr)readOffset, (GLintptr)writeOffset, (GLsizeiptr)size);
    }
    inline void NamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data){
        glNamedBufferSubData((GLuint)buffer, (GLintptr)offset, (GLsizeiptr)size, (const void *)data);
    }
    inline void NamedBufferData(GLuint buffer, GLsizeiptr size, const void * data, enum VertexBufferObjectUsage usage){
        glNamedBufferData((GLuint)buffer, (GLsizeiptr)size, (const void *)data, (GLenum)usage);
    }
    inline void NamedBufferStorage(GLuint buffer, GLsizeiptr size, const void * data, enum BufferStorageMask flags){
        glNamedBufferStorage((GLuint)buffer, (GLsizeiptr)size, (const void *)data, (GLbitfield)flags);
    }
    inline void GetTransformFeedbacki64_v(GLuint xfb, enum TransformFeedbackPName pname, GLuint index, GLint64 * param){
        glGetTransformFeedbacki64_v((GLuint)xfb, (GLenum)pname, (GLuint)index, (GLint64 *)param);
    }
    inline void GetTransformFeedbacki_v(GLuint xfb, enum TransformFeedbackPName pname, GLuint index, GLint * param){
        glGetTransformFeedbacki_v((GLuint)xfb, (GLenum)pname, (GLuint)index, (GLint *)param);
    }
    inline void TransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){
        glTransformFeedbackBufferRange((GLuint)xfb, (GLuint)index, (GLuint)buffer, (GLintptr)offset, (GLsizeiptr)size);
    }
    inline void CreateTransformFeedbacks(GLsizei n, GLuint * ids){
        glCreateTransformFeedbacks((GLsizei)n, (GLuint *)ids);
    }
    inline void BindImageTextures(GLuint first, GLsizei count, const GLuint * textures){
        glBindImageTextures((GLuint)first, (GLsizei)count, (const GLuint *)textures);
    }
    inline void BindSamplers(GLuint first, GLsizei count, const GLuint * samplers){
        glBindSamplers((GLuint)first, (GLsizei)count, (const GLuint *)samplers);
    }
    inline void BindBuffersRange(enum BufferTargetARB target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes){
        glBindBuffersRange((GLenum)target, (GLuint)first, (GLsizei)count, (const GLuint *)buffers, (const GLintptr *)offsets, (const GLsizeiptr *)sizes);
    }
    inline void BindBuffersBase(enum BufferTargetARB target, GLuint first, GLsizei count, const GLuint * buffers){
        glBindBuffersBase((GLenum)target, (GLuint)first, (GLsizei)count, (const GLuint *)buffers);
    }
    inline void ClearTexImage(GLuint texture, GLint level, enum PixelFormat format, enum PixelType type, const void * data){
        glClearTexImage((GLuint)texture, (GLint)level, (GLenum)format, (GLenum)type, (const void *)data);
    }
    inline void GetPointerv(enum GetPointervPName pname, void ** params){
        glGetPointerv((GLenum)pname, (void **)params);
    }
    inline void GetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label){
        glGetObjectPtrLabel((const void *)ptr, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)label);
    }
    inline void ObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label){
        glObjectPtrLabel((const void *)ptr, (GLsizei)length, (const GLchar *)label);
    }
    inline void GetObjectLabel(enum ObjectIdentifier identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label){
        glGetObjectLabel((GLenum)identifier, (GLuint)name, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)label);
    }
    inline void ObjectLabel(enum ObjectIdentifier identifier, GLuint name, GLsizei length, const GLchar * label){
        glObjectLabel((GLenum)identifier, (GLuint)name, (GLsizei)length, (const GLchar *)label);
    }
    inline void PopDebugGroup(){
        glPopDebugGroup();
    }
    inline void PushDebugGroup(enum DebugSource source, GLuint id, GLsizei length, const GLchar * message){
        glPushDebugGroup((GLenum)source, (GLuint)id, (GLsizei)length, (const GLchar *)message);
    }
    inline void NamedFramebufferRenderbuffer(GLuint framebuffer, enum FramebufferAttachment attachment, enum RenderbufferTarget renderbuffertarget, GLuint renderbuffer){
        glNamedFramebufferRenderbuffer((GLuint)framebuffer, (GLenum)attachment, (GLenum)renderbuffertarget, (GLuint)renderbuffer);
    }
    inline GLuint GetDebugMessageLog(GLuint count, GLsizei bufSize, DebugSource * sources, DebugType * types, GLuint * ids, DebugSeverity * severities, GLsizei * lengths, GLchar * messageLog){
        return glGetDebugMessageLog((GLuint)count, (GLsizei)bufSize, (GLenum *)sources, (GLenum *)types, (GLuint *)ids, (GLenum *)severities, (GLsizei *)lengths, (GLchar *)messageLog);
    }
    inline void DebugMessageCallback(GLDEBUGPROC callback, const void * userParam){
        glDebugMessageCallback((GLDEBUGPROC)callback, (const void *)userParam);
    }
    inline void DebugMessageInsert(enum DebugSource source, enum DebugType type, GLuint id, enum DebugSeverity severity, GLsizei length, const GLchar * buf){
        glDebugMessageInsert((GLenum)source, (GLenum)type, (GLuint)id, (GLenum)severity, (GLsizei)length, (const GLchar *)buf);
    }
    inline void DebugMessageControl(enum DebugSource source, enum DebugType type, enum DebugSeverity severity, GLsizei count, const GLuint * ids, enum Boolean enabled){
        glDebugMessageControl((GLenum)source, (GLenum)type, (GLenum)severity, (GLsizei)count, (const GLuint *)ids, (GLboolean)enabled);
    }
    inline void VertexBindingDivisor(GLuint bindingindex, GLuint divisor){
        glVertexBindingDivisor((GLuint)bindingindex, (GLuint)divisor);
    }
    inline void VertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, enum VertexAttribLType type, GLuint relativeoffset){
        glVertexArrayAttribLFormat((GLuint)vaobj, (GLuint)attribindex, (GLint)size, (GLenum)type, (GLuint)relativeoffset);
    }
    inline void BindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){
        glBindVertexBuffer((GLuint)bindingindex, (GLuint)buffer, (GLintptr)offset, (GLsizei)stride);
    }
    inline void TexStorage2DMultisample(enum TextureTarget target, GLsizei samples, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height, enum Boolean fixedsamplelocations){
        glTexStorage2DMultisample((GLenum)target, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLboolean)fixedsamplelocations);
    }
    inline void ShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding){
        glShaderStorageBlockBinding((GLuint)program, (GLuint)storageBlockIndex, (GLuint)storageBlockBinding);
    }
    inline void GetnConvolutionFilter(enum ConvolutionTarget target, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * image){
        glGetnConvolutionFilter((GLenum)target, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)image);
    }
    inline void TexStorage3DMultisample(enum TextureTarget target, GLsizei samples, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height, GLsizei depth, enum Boolean fixedsamplelocations){
        glTexStorage3DMultisample((GLenum)target, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLboolean)fixedsamplelocations);
    }
    inline GLint GetProgramResourceLocationIndex(GLuint program, enum ProgramInterface programInterface, const GLchar * name){
        return glGetProgramResourceLocationIndex((GLuint)program, (GLenum)programInterface, (const GLchar *)name);
    }
    inline void TexParameterIiv(enum TextureTarget target, enum TextureParameterName pname, const GLint * params){
        glTexParameterIiv((GLenum)target, (GLenum)pname, (const GLint *)params);
    }
    inline void TexBufferRange(enum TextureTarget target, enum SizedInternalFormat internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){
        glTexBufferRange((GLenum)target, (GLenum)internalformat, (GLuint)buffer, (GLintptr)offset, (GLsizeiptr)size);
    }
    inline void MultiTexCoordP4uiv(enum TextureUnit texture, enum TexCoordPointerType type, const GLuint * coords){
        glMultiTexCoordP4uiv((GLenum)texture, (GLenum)type, (const GLuint *)coords);
    }
    inline void ClearDepthf(GLfloat d){
        glClearDepthf((GLfloat)d);
    }
    inline void Uniform2uiv(GLint location, GLsizei count, const GLuint * value){
        glUniform2uiv((GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void EndConditionalRender(){
        glEndConditionalRender();
    }
    inline GLint GetFragDataLocation(GLuint program, const GLchar * name){
        return glGetFragDataLocation((GLuint)program, (const GLchar *)name);
    }
    inline void FramebufferTexture3D(enum FramebufferTarget target, enum FramebufferAttachment attachment, enum TextureTarget textarget, GLuint texture, GLint level, GLint zoffset){
        glFramebufferTexture3D((GLenum)target, (GLenum)attachment, (GLenum)textarget, (GLuint)texture, (GLint)level, (GLint)zoffset);
    }
    inline void ProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2){
        glProgramUniform3d((GLuint)program, (GLint)location, (GLdouble)v0, (GLdouble)v1, (GLdouble)v2);
    }
    inline void TextureView(GLuint texture, enum TextureTarget target, GLuint origtexture, enum SizedInternalFormat internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers){
        glTextureView((GLuint)texture, (GLenum)target, (GLuint)origtexture, (GLenum)internalformat, (GLuint)minlevel, (GLuint)numlevels, (GLuint)minlayer, (GLuint)numlayers);
    }
    inline void ProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix3x4fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void GetUniformuiv(GLuint program, GLint location, GLuint * params){
        glGetUniformuiv((GLuint)program, (GLint)location, (GLuint *)params);
    }
    inline void VertexAttribI3iv(GLuint index, const GLint * v){
        glVertexAttribI3iv((GLuint)index, (const GLint *)v);
    }
    inline void GetQueryBufferObjectuiv(GLuint id, GLuint buffer, enum QueryObjectParameterName pname, GLintptr offset){
        glGetQueryBufferObjectuiv((GLuint)id, (GLuint)buffer, (GLenum)pname, (GLintptr)offset);
    }
    inline void ProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix4x2dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void VertexAttribI1iv(GLuint index, const GLint * v){
        glVertexAttribI1iv((GLuint)index, (const GLint *)v);
    }
    inline void VertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w){
        glVertexAttribI4i((GLuint)index, (GLint)x, (GLint)y, (GLint)z, (GLint)w);
    }
    inline GLuint CreateProgram(){
        return glCreateProgram();
    }
    inline void BeginConditionalRender(GLuint id, enum ConditionalRenderMode mode){
        glBeginConditionalRender((GLuint)id, (GLenum)mode);
    }
    inline void Uniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2){
        glUniform3ui((GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2);
    }
    inline void ProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix2x4fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void ClampColor(enum ClampColorTargetARB target, enum ClampColorModeARB clamp){
        glClampColor((GLenum)target, (GLenum)clamp);
    }
    inline void GetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, AttributeType * type, GLchar * name){
        glGetTransformFeedbackVarying((GLuint)program, (GLuint)index, (GLsizei)bufSize, (GLsizei *)length, (GLsizei *)size, (GLenum *)type, (GLchar *)name);
    }
    inline void BindBufferRange(enum BufferTargetARB target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){
        glBindBufferRange((GLenum)target, (GLuint)index, (GLuint)buffer, (GLintptr)offset, (GLsizeiptr)size);
    }
    inline void BeginTransformFeedback(enum PrimitiveType primitiveMode){
        glBeginTransformFeedback((GLenum)primitiveMode);
    }
    inline void GetTexLevelParameterfv(enum TextureTarget target, GLint level, enum GetTextureParameter pname, GLfloat * params){
        glGetTexLevelParameterfv((GLenum)target, (GLint)level, (GLenum)pname, (GLfloat *)params);
    }
    inline void FlushMappedBufferRange(enum BufferTargetARB target, GLintptr offset, GLsizeiptr length){
        glFlushMappedBufferRange((GLenum)target, (GLintptr)offset, (GLsizeiptr)length);
    }
    inline void WaitSync(GLsync sync, enum SyncBehaviorFlags flags, GLuint64 timeout){
        glWaitSync((GLsync)sync, (GLbitfield)flags, (GLuint64)timeout);
    }
    inline void GetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values){
        glGetnPixelMapuiv((GLenum)map, (GLsizei)bufSize, (GLuint *)values);
    }
    inline void GetQueryiv(enum QueryTarget target, enum QueryParameterName pname, GLint * params){
        glGetQueryiv((GLenum)target, (GLenum)pname, (GLint *)params);
    }
    inline void ClearBufferiv(enum BufferBit buffer, GLint drawbuffer, const GLint * value){
        glClearBufferiv((GLenum)buffer, (GLint)drawbuffer, (const GLint *)value);
    }
    inline void ClearDepth(GLdouble depth){
        glClearDepth((GLdouble)depth);
    }
    inline void * MapBufferRange(enum BufferTargetARB target, GLintptr offset, GLsizeiptr length, enum MapBufferAccessMask access){
        return glMapBufferRange((GLenum)target, (GLintptr)offset, (GLsizeiptr)length, (GLbitfield)access);
    }
    inline void ProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2){
        glProgramUniform3i((GLuint)program, (GLint)location, (GLint)v0, (GLint)v1, (GLint)v2);
    }
    inline void BindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name){
        glBindFragDataLocationIndexed((GLuint)program, (GLuint)colorNumber, (GLuint)index, (const GLchar *)name);
    }
    inline void VertexAttribI4bv(GLuint index, const GLbyte * v){
        glVertexAttribI4bv((GLuint)index, (const GLbyte *)v);
    }
    inline void UniformMatrix3x2fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix3x2fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void TransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer){
        glTransformFeedbackBufferBase((GLuint)xfb, (GLuint)index, (GLuint)buffer);
    }
    inline void VertexAttribBinding(GLuint attribindex, GLuint bindingindex){
        glVertexAttribBinding((GLuint)attribindex, (GLuint)bindingindex);
    }
    inline void GetActiveSubroutineUniformiv(GLuint program, enum ShaderType shadertype, GLuint index, enum SubroutineParameterName pname, GLint * values){
        glGetActiveSubroutineUniformiv((GLuint)program, (GLenum)shadertype, (GLuint)index, (GLenum)pname, (GLint *)values);
    }
    inline void VertexAttrib4ubv(GLuint index, const GLubyte * v){
        glVertexAttrib4ubv((GLuint)index, (const GLubyte *)v);
    }
    inline void NormalP3uiv(enum NormalPointerType type, const GLuint * coords){
        glNormalP3uiv((GLenum)type, (const GLuint *)coords);
    }
    inline void VertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w){
        glVertexAttrib4s((GLuint)index, (GLshort)x, (GLshort)y, (GLshort)z, (GLshort)w);
    }
    inline GLuint GetSubroutineIndex(GLuint program, enum ShaderType shadertype, const GLchar * name){
        return glGetSubroutineIndex((GLuint)program, (GLenum)shadertype, (const GLchar *)name);
    }
    inline void VertexAttrib4iv(GLuint index, const GLint * v){
        glVertexAttrib4iv((GLuint)index, (const GLint *)v);
    }
    inline void BindFragDataLocation(GLuint program, GLuint color, const GLchar * name){
        glBindFragDataLocation((GLuint)program, (GLuint)color, (const GLchar *)name);
    }
    inline void VertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){
        glVertexAttrib4d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z, (GLdouble)w);
    }
    inline void GetTransformFeedbackiv(GLuint xfb, enum TransformFeedbackPName pname, GLint * param){
        glGetTransformFeedbackiv((GLuint)xfb, (GLenum)pname, (GLint *)param);
    }
    inline void VertexAttrib4bv(GLuint index, const GLbyte * v){
        glVertexAttrib4bv((GLuint)index, (const GLbyte *)v);
    }
    inline void VertexAttrib4Nuiv(GLuint index, const GLuint * v){
        glVertexAttrib4Nuiv((GLuint)index, (const GLuint *)v);
    }
    inline void VertexAttrib3dv(GLuint index, const GLdouble * v){
        glVertexAttrib3dv((GLuint)index, (const GLdouble *)v);
    }
    inline void SamplerParameterf(GLuint sampler, enum SamplerParameterF pname, GLfloat param){
        glSamplerParameterf((GLuint)sampler, (GLenum)pname, (GLfloat)param);
    }
    inline void GetnHistogram(enum HistogramTarget target, enum Boolean reset, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * values){
        glGetnHistogram((GLenum)target, (GLboolean)reset, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)values);
    }
    inline void Viewport(GLint x, GLint y, GLsizei width, GLsizei height){
        glViewport((GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void GetNamedFramebufferParameteriv(GLuint framebuffer, enum GetFramebufferParameter pname, GLint * param){
        glGetNamedFramebufferParameteriv((GLuint)framebuffer, (GLenum)pname, (GLint *)param);
    }
    inline void GetBooleani_v(enum BufferTargetARB target, GLuint index, Boolean * data){
        glGetBooleani_v((GLenum)target, (GLuint)index, (GLboolean *)data);
    }
    inline void VertexAttrib4Niv(GLuint index, const GLint * v){
        glVertexAttrib4Niv((GLuint)index, (const GLint *)v);
    }
    inline void Uniform1fv(GLint location, GLsizei count, const GLfloat * value){
        glUniform1fv((GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline GLint GetSubroutineUniformLocation(GLuint program, enum ShaderType shadertype, const GLchar * name){
        return glGetSubroutineUniformLocation((GLuint)program, (GLenum)shadertype, (const GLchar *)name);
    }
    inline void VertexAttrib4Nbv(GLuint index, const GLbyte * v){
        glVertexAttrib4Nbv((GLuint)index, (const GLbyte *)v);
    }
    inline void VertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z){
        glVertexAttrib3s((GLuint)index, (GLshort)x, (GLshort)y, (GLshort)z);
    }
    inline void VertexAttrib3fv(GLuint index, const GLfloat * v){
        glVertexAttrib3fv((GLuint)index, (const GLfloat *)v);
    }
    inline void VertexAttrib1fv(GLuint index, const GLfloat * v){
        glVertexAttrib1fv((GLuint)index, (const GLfloat *)v);
    }
    inline void CreateVertexArrays(GLsizei n, GLuint * arrays){
        glCreateVertexArrays((GLsizei)n, (GLuint *)arrays);
    }
    inline void VertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){
        glVertexAttrib4f((GLuint)index, (GLfloat)x, (GLfloat)y, (GLfloat)z, (GLfloat)w);
    }
    inline void VertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z){
        glVertexAttrib3d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z);
    }
    inline void VertexAttrib2s(GLuint index, GLshort x, GLshort y){
        glVertexAttrib2s((GLuint)index, (GLshort)x, (GLshort)y);
    }
    inline void VertexAttrib2d(GLuint index, GLdouble x, GLdouble y){
        glVertexAttrib2d((GLuint)index, (GLdouble)x, (GLdouble)y);
    }
    inline void StencilMask(GLuint mask){
        glStencilMask((GLuint)mask);
    }
    inline void VertexAttrib4fv(GLuint index, const GLfloat * v){
        glVertexAttrib4fv((GLuint)index, (const GLfloat *)v);
    }
    inline void VertexAttrib4Nubv(GLuint index, const GLubyte * v){
        glVertexAttrib4Nubv((GLuint)index, (const GLubyte *)v);
    }
    inline void GetFramebufferAttachmentParameteriv(enum FramebufferTarget target, enum FramebufferAttachment attachment, enum FramebufferAttachmentParameterName pname, GLint * params){
        glGetFramebufferAttachmentParameteriv((GLenum)target, (GLenum)attachment, (GLenum)pname, (GLint *)params);
    }
    inline void VertexAttribFormat(GLuint attribindex, GLint size, enum VertexAttribType type, enum Boolean normalized, GLuint relativeoffset){
        glVertexAttribFormat((GLuint)attribindex, (GLint)size, (GLenum)type, (GLboolean)normalized, (GLuint)relativeoffset);
    }
    inline void VertexAttribL2d(GLuint index, GLdouble x, GLdouble y){
        glVertexAttribL2d((GLuint)index, (GLdouble)x, (GLdouble)y);
    }
    inline void VertexAttribI4uiv(GLuint index, const GLuint * v){
        glVertexAttribI4uiv((GLuint)index, (const GLuint *)v);
    }
    inline void GenTransformFeedbacks(GLsizei n, GLuint * ids){
        glGenTransformFeedbacks((GLsizei)n, (GLuint *)ids);
    }
    inline void GetVertexArrayIndexediv(GLuint vaobj, GLuint index, enum VertexArrayPName pname, GLint * param){
        glGetVertexArrayIndexediv((GLuint)vaobj, (GLuint)index, (GLenum)pname, (GLint *)param);
    }
    inline void VertexAttrib2f(GLuint index, GLfloat x, GLfloat y){
        glVertexAttrib2f((GLuint)index, (GLfloat)x, (GLfloat)y);
    }
    inline void GetnColorTable(enum ColorTableTarget target, enum PixelFormat format, enum PixelType type, GLsizei bufSize, void * table){
        glGetnColorTable((GLenum)target, (GLenum)format, (GLenum)type, (GLsizei)bufSize, (void *)table);
    }
    inline void ClipControl(enum ClipControlOrigin origin, enum ClipControlDepth depth){
        glClipControl((GLenum)origin, (GLenum)depth);
    }
    inline void CopyTexSubImage3D(enum TextureTarget target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){
        glCopyTexSubImage3D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void ClearNamedFramebufferiv(GLuint framebuffer, enum BufferBit buffer, GLint drawbuffer, const GLint * value){
        glClearNamedFramebufferiv((GLuint)framebuffer, (GLenum)buffer, (GLint)drawbuffer, (const GLint *)value);
    }
    inline void GetProgramInterfaceiv(GLuint program, enum ProgramInterface programInterface, enum ProgramInterfacePName pname, GLint * params){
        glGetProgramInterfaceiv((GLuint)program, (GLenum)programInterface, (GLenum)pname, (GLint *)params);
    }
    inline void GetNamedBufferParameteri64v(GLuint buffer, enum BufferPNameARB pname, GLint64 * params){
        glGetNamedBufferParameteri64v((GLuint)buffer, (GLenum)pname, (GLint64 *)params);
    }
    inline void VertexAttrib1dv(GLuint index, const GLdouble * v){
        glVertexAttrib1dv((GLuint)index, (const GLdouble *)v);
    }
    inline void ValidateProgram(GLuint program){
        glValidateProgram((GLuint)program);
    }
    inline void UniformMatrix4fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix4fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void UniformMatrix3fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix3fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void UniformMatrix2fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix2fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void UniformMatrix4x3fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix4x3fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void Uniform1dv(GLint location, GLsizei count, const GLdouble * value){
        glUniform1dv((GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline void SamplerParameterfv(GLuint sampler, enum SamplerParameterF pname, const GLfloat * param){
        glSamplerParameterfv((GLuint)sampler, (GLenum)pname, (const GLfloat *)param);
    }
    inline void BindTexture(enum TextureTarget target, GLuint texture){
        glBindTexture((GLenum)target, (GLuint)texture);
    }
    inline void VertexAttrib4dv(GLuint index, const GLdouble * v){
        glVertexAttrib4dv((GLuint)index, (const GLdouble *)v);
    }
    inline void Uniform2iv(GLint location, GLsizei count, const GLint * value){
        glUniform2iv((GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline void GetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, enum UniformPName pname, GLint * params){
        glGetActiveUniformsiv((GLuint)program, (GLsizei)uniformCount, (const GLuint *)uniformIndices, (GLenum)pname, (GLint *)params);
    }
    inline void VertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w){
        glVertexAttribI4ui((GLuint)index, (GLuint)x, (GLuint)y, (GLuint)z, (GLuint)w);
    }
    inline void DepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v){
        glDepthRangeArrayv((GLuint)first, (GLsizei)count, (const GLdouble *)v);
    }
    inline void VertexAttrib1sv(GLuint index, const GLshort * v){
        glVertexAttrib1sv((GLuint)index, (const GLshort *)v);
    }
    inline void VertexAttribI2ui(GLuint index, GLuint x, GLuint y){
        glVertexAttribI2ui((GLuint)index, (GLuint)x, (GLuint)y);
    }
    inline void ClearBufferfi(enum BufferBit buffer, GLint drawbuffer, GLfloat depth, GLint stencil){
        glClearBufferfi((GLenum)buffer, (GLint)drawbuffer, (GLfloat)depth, (GLint)stencil);
    }
    inline void MultiDrawElementsBaseVertex(enum PrimitiveType mode, const GLsizei * count, enum DrawElementsType type, const void *const* indices, GLsizei drawcount, const GLint * basevertex){
        glMultiDrawElementsBaseVertex((GLenum)mode, (const GLsizei *)count, (GLenum)type, (const void *const*)indices, (GLsizei)drawcount, (const GLint *)basevertex);
    }
    inline void Uniform3fv(GLint location, GLsizei count, const GLfloat * value){
        glUniform3fv((GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline void GetMultisamplefv(enum GetMultisamplePNameNV pname, GLuint index, GLfloat * val){
        glGetMultisamplefv((GLenum)pname, (GLuint)index, (GLfloat *)val);
    }
    inline void FramebufferTexture(enum FramebufferTarget target, enum FramebufferAttachment attachment, GLuint texture, GLint level){
        glFramebufferTexture((GLenum)target, (GLenum)attachment, (GLuint)texture, (GLint)level);
    }
    inline void Uniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){
        glUniform4f((GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2, (GLfloat)v3);
    }
    inline void ProgramUniform1d(GLuint program, GLint location, GLdouble v0){
        glProgramUniform1d((GLuint)program, (GLint)location, (GLdouble)v0);
    }
    inline void GetFramebufferParameteriv(enum FramebufferTarget target, enum FramebufferAttachmentParameterName pname, GLint * params){
        glGetFramebufferParameteriv((GLenum)target, (GLenum)pname, (GLint *)params);
    }
    inline void TextureParameterIuiv(GLuint texture, enum TextureParameterName pname, const GLuint * params){
        glTextureParameterIuiv((GLuint)texture, (GLenum)pname, (const GLuint *)params);
    }
    inline GLenum GetError(){
        return glGetError();
    }
    inline void Uniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2){
        glUniform3f((GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2);
    }
    inline void CopyTexImage1D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLint x, GLint y, GLsizei width, GLint border){
        glCopyTexImage1D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLint)x, (GLint)y, (GLsizei)width, (GLint)border);
    }
    inline void ClearBufferSubData(enum BufferTargetARB target, enum SizedInternalFormat internalformat, GLintptr offset, GLsizeiptr size, enum PixelFormat format, enum PixelType type, const void * data){
        glClearBufferSubData((GLenum)target, (GLenum)internalformat, (GLintptr)offset, (GLsizeiptr)size, (GLenum)format, (GLenum)type, (const void *)data);
    }
    inline void GetBufferParameteri64v(enum BufferTargetARB target, enum BufferPNameARB pname, GLint64 * params){
        glGetBufferParameteri64v((GLenum)target, (GLenum)pname, (GLint64 *)params);
    }
    inline void GetVertexAttribdv(GLuint index, enum VertexAttribPropertyARB pname, GLdouble * params){
        glGetVertexAttribdv((GLuint)index, (GLenum)pname, (GLdouble *)params);
    }
    inline void TexSubImage1D(enum TextureTarget target, GLint level, GLint xoffset, GLsizei width, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTexSubImage1D((GLenum)target, (GLint)level, (GLint)xoffset, (GLsizei)width, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void Uniform4iv(GLint location, GLsizei count, const GLint * value){
        glUniform4iv((GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline void TexImage1D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLsizei width, GLint border, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTexImage1D((GLenum)target, (GLint)level, (GLint)internalformat, (GLsizei)width, (GLint)border, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void GetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders){
        glGetAttachedShaders((GLuint)program, (GLsizei)maxCount, (GLsizei *)count, (GLuint *)shaders);
    }
    inline void DisableVertexAttribArray(GLuint index){
        glDisableVertexAttribArray((GLuint)index);
    }
    inline void StencilMaskSeparate(enum TriangleFace face, GLuint mask){
        glStencilMaskSeparate((GLenum)face, (GLuint)mask);
    }
    inline void GetIntegerv(enum GetPName pname, GLint * data){
        glGetIntegerv((GLenum)pname, (GLint *)data);
    }
    inline void TexParameterf(enum TextureTarget target, enum TextureParameterName pname, GLfloat param){
        glTexParameterf((GLenum)target, (GLenum)pname, (GLfloat)param);
    }
    inline void MultiDrawArrays(enum PrimitiveType mode, const GLint * first, const GLsizei * count, GLsizei drawcount){
        glMultiDrawArrays((GLenum)mode, (const GLint *)first, (const GLsizei *)count, (GLsizei)drawcount);
    }
    inline void VertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){
        glVertexArrayVertexBuffer((GLuint)vaobj, (GLuint)bindingindex, (GLuint)buffer, (GLintptr)offset, (GLsizei)stride);
    }
    inline void GetFloatv(enum GetPName pname, GLfloat * data){
        glGetFloatv((GLenum)pname, (GLfloat *)data);
    }
    inline void GetBooleanv(enum GetPName pname, Boolean * data){
        glGetBooleanv((GLenum)pname, (GLboolean *)data);
    }
    inline void StencilOp(enum StencilOp fail, enum StencilOp zfail, enum StencilOp zpass){
        glStencilOp((GLenum)fail, (GLenum)zfail, (GLenum)zpass);
    }
    inline void ScissorIndexedv(GLuint index, const GLint * v){
        glScissorIndexedv((GLuint)index, (const GLint *)v);
    }
    inline void CreateBuffers(GLsizei n, GLuint * buffers){
        glCreateBuffers((GLsizei)n, (GLuint *)buffers);
    }
    inline void EnableVertexAttribArray(GLuint index){
        glEnableVertexAttribArray((GLuint)index);
    }
    inline void DeleteTransformFeedbacks(GLsizei n, const GLuint * ids){
        glDeleteTransformFeedbacks((GLsizei)n, (const GLuint *)ids);
    }
    inline void VertexAttrib2sv(GLuint index, const GLshort * v){
        glVertexAttrib2sv((GLuint)index, (const GLshort *)v);
    }
    inline void BlendFuncSeparate(enum BlendingFactor sfactorRGB, enum BlendingFactor dfactorRGB, enum BlendingFactor sfactorAlpha, enum BlendingFactor dfactorAlpha){
        glBlendFuncSeparate((GLenum)sfactorRGB, (GLenum)dfactorRGB, (GLenum)sfactorAlpha, (GLenum)dfactorAlpha);
    }
    inline void VertexAttribL1dv(GLuint index, const GLdouble * v){
        glVertexAttribL1dv((GLuint)index, (const GLdouble *)v);
    }
    inline void TextureBarrier(){
        glTextureBarrier();
    }
    inline void Uniform3uiv(GLint location, GLsizei count, const GLuint * value){
        glUniform3uiv((GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void ProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1){
        glProgramUniform2d((GLuint)program, (GLint)location, (GLdouble)v0, (GLdouble)v1);
    }
    inline void ProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2){
        glProgramUniform3f((GLuint)program, (GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2);
    }
    inline void BindBufferBase(enum BufferTargetARB target, GLuint index, GLuint buffer){
        glBindBufferBase((GLenum)target, (GLuint)index, (GLuint)buffer);
    }
    inline void ProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value){
        glProgramUniform4uiv((GLuint)program, (GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void GetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values){
        glGetnPixelMapfv((GLenum)map, (GLsizei)bufSize, (GLfloat *)values);
    }
    inline void ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, enum PixelFormat format, enum PixelType type, void * pixels){
        glReadPixels((GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLenum)type, (void *)pixels);
    }
    inline void GetTexParameterfv(enum TextureTarget target, enum GetTextureParameter pname, GLfloat * params){
        glGetTexParameterfv((GLenum)target, (GLenum)pname, (GLfloat *)params);
    }
    inline void GetDoublev(enum GetPName pname, GLdouble * data){
        glGetDoublev((GLenum)pname, (GLdouble *)data);
    }
    inline void TexParameteri(enum TextureTarget target, enum TextureParameterName pname, GLint param){
        glTexParameteri((GLenum)target, (GLenum)pname, (GLint)param);
    }
    inline void BlendFunc(enum BlendingFactor sfactor, enum BlendingFactor dfactor){
        glBlendFunc((GLenum)sfactor, (GLenum)dfactor);
    }
    inline void VertexAttribPointer(GLuint index, GLint size, enum VertexAttribPointerType type, enum Boolean normalized, GLsizei stride, const void * pointer){
        glVertexAttribPointer((GLuint)index, (GLint)size, (GLenum)type, (GLboolean)normalized, (GLsizei)stride, (const void *)pointer);
    }
    inline void TexSubImage3D(enum TextureTarget target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTexSubImage3D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void GetVertexArrayiv(GLuint vaobj, enum VertexArrayPName pname, GLint * param){
        glGetVertexArrayiv((GLuint)vaobj, (GLenum)pname, (GLint *)param);
    }
    inline void ClearBufferData(enum BufferStorageTarget target, enum SizedInternalFormat internalformat, enum PixelFormat format, enum PixelType type, const void * data){
        glClearBufferData((GLenum)target, (GLenum)internalformat, (GLenum)format, (GLenum)type, (const void *)data);
    }
    inline void DetachShader(GLuint program, GLuint shader){
        glDetachShader((GLuint)program, (GLuint)shader);
    }
    inline void BindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides){
        glBindVertexBuffers((GLuint)first, (GLsizei)count, (const GLuint *)buffers, (const GLintptr *)offsets, (const GLsizei *)strides);
    }
    inline void VertexP2uiv(enum VertexPointerType type, const GLuint * value){
        glVertexP2uiv((GLenum)type, (const GLuint *)value);
    }
    inline void GetTexLevelParameteriv(enum TextureTarget target, GLint level, enum GetTextureParameter pname, GLint * params){
        glGetTexLevelParameteriv((GLenum)target, (GLint)level, (GLenum)pname, (GLint *)params);
    }
    inline void DrawArrays(enum PrimitiveType mode, GLint first, GLsizei count){
        glDrawArrays((GLenum)mode, (GLint)first, (GLsizei)count);
    }
    inline void DrawElements(enum PrimitiveType mode, GLsizei count, enum DrawElementsType type, const void * indices){
        glDrawElements((GLenum)mode, (GLsizei)count, (GLenum)type, (const void *)indices);
    }
    inline void Uniform3i(GLint location, GLint v0, GLint v1, GLint v2){
        glUniform3i((GLint)location, (GLint)v0, (GLint)v1, (GLint)v2);
    }
    inline void TexParameteriv(enum TextureTarget target, enum TextureParameterName pname, const GLint * params){
        glTexParameteriv((GLenum)target, (GLenum)pname, (const GLint *)params);
    }
    inline void VertexAttribI2iv(GLuint index, const GLint * v){
        glVertexAttribI2iv((GLuint)index, (const GLint *)v);
    }
    inline void ProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value){
        glProgramUniform3dv((GLuint)program, (GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline void PrimitiveRestartIndex(GLuint index){
        glPrimitiveRestartIndex((GLuint)index);
    }
    inline void Hint(enum HintTarget target, enum HintMode mode){
        glHint((GLenum)target, (GLenum)mode);
    }
    inline void CreateRenderbuffers(GLsizei n, GLuint * renderbuffers){
        glCreateRenderbuffers((GLsizei)n, (GLuint *)renderbuffers);
    }
    inline void PointParameteri(enum PointParameterNameARB pname, GLint param){
        glPointParameteri((GLenum)pname, (GLint)param);
    }
    inline void BeginQueryIndexed(enum QueryTarget target, GLuint index, GLuint id){
        glBeginQueryIndexed((GLenum)target, (GLuint)index, (GLuint)id);
    }
    inline void LineWidth(GLfloat width){
        glLineWidth((GLfloat)width);
    }
    inline void TexImage2D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLsizei width, GLsizei height, GLint border, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTexImage2D((GLenum)target, (GLint)level, (GLint)internalformat, (GLsizei)width, (GLsizei)height, (GLint)border, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline GLboolean UnmapBuffer(enum BufferTargetARB target){
        return glUnmapBuffer((GLenum)target);
    }
    inline void GetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data){
        glGetNamedBufferSubData((GLuint)buffer, (GLintptr)offset, (GLsizeiptr)size, (void *)data);
    }
    inline GLboolean IsQuery(GLuint id){
        return glIsQuery((GLuint)id);
    }
    inline GLboolean IsEnabled(enum EnableCap cap){
        return glIsEnabled((GLenum)cap);
    }
    inline void VertexAttribI3uiv(GLuint index, const GLuint * v){
        glVertexAttribI3uiv((GLuint)index, (const GLuint *)v);
    }
    inline void StencilFuncSeparate(enum TriangleFace face, enum StencilFunction func, GLint ref, GLuint mask){
        glStencilFuncSeparate((GLenum)face, (GLenum)func, (GLint)ref, (GLuint)mask);
    }
    inline void ClearNamedBufferSubData(GLuint buffer, enum SizedInternalFormat internalformat, GLintptr offset, GLsizeiptr size, enum PixelFormat format, enum PixelType type, const void * data){
        glClearNamedBufferSubData((GLuint)buffer, (GLenum)internalformat, (GLintptr)offset, (GLsizeiptr)size, (GLenum)format, (GLenum)type, (const void *)data);
    }
    inline void UniformMatrix3x4fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix3x4fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void ProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix3dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void BlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, enum ClearBufferMask mask, enum BlitFramebufferFilter filter){
        glBlitNamedFramebuffer((GLuint)readFramebuffer, (GLuint)drawFramebuffer, (GLint)srcX0, (GLint)srcY0, (GLint)srcX1, (GLint)srcY1, (GLint)dstX0, (GLint)dstY0, (GLint)dstX1, (GLint)dstY1, (GLbitfield)mask, (GLenum)filter);
    }
    inline void TexParameterfv(enum TextureTarget target, enum TextureParameterName pname, const GLfloat * params){
        glTexParameterfv((GLenum)target, (GLenum)pname, (const GLfloat *)params);
    }
    inline void PatchParameteri(enum PatchParameterName pname, GLint value){
        glPatchParameteri((GLenum)pname, (GLint)value);
    }
    inline void GetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v){
        glGetnMapiv((GLenum)target, (GLenum)query, (GLsizei)bufSize, (GLint *)v);
    }
    inline void PointSize(GLfloat size){
        glPointSize((GLfloat)size);
    }
    inline void UniformMatrix2x3dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix2x3dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void VertexAttribI1ui(GLuint index, GLuint x){
        glVertexAttribI1ui((GLuint)index, (GLuint)x);
    }
    inline void TexParameterIuiv(enum TextureTarget target, enum TextureParameterName pname, const GLuint * params){
        glTexParameterIuiv((GLenum)target, (GLenum)pname, (const GLuint *)params);
    }
    inline void Uniform1d(GLint location, GLdouble x){
        glUniform1d((GLint)location, (GLdouble)x);
    }
    inline void UseProgram(GLuint program){
        glUseProgram((GLuint)program);
    }
    inline void GetIntegeri_v(enum GetPName target, GLuint index, GLint * data){
        glGetIntegeri_v((GLenum)target, (GLuint)index, (GLint *)data);
    }
    inline void ProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix4x2fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void CopyImageSubData(GLuint srcName, enum CopyImageSubDataTarget srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, enum CopyImageSubDataTarget dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth){
        glCopyImageSubData((GLuint)srcName, (GLenum)srcTarget, (GLint)srcLevel, (GLint)srcX, (GLint)srcY, (GLint)srcZ, (GLuint)dstName, (GLenum)dstTarget, (GLint)dstLevel, (GLint)dstX, (GLint)dstY, (GLint)dstZ, (GLsizei)srcWidth, (GLsizei)srcHeight, (GLsizei)srcDepth);
    }
    inline void GetRenderbufferParameteriv(enum RenderbufferTarget target, enum RenderbufferParameterName pname, GLint * params){
        glGetRenderbufferParameteriv((GLenum)target, (GLenum)pname, (GLint *)params);
    }
    inline void DispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z){
        glDispatchCompute((GLuint)num_groups_x, (GLuint)num_groups_y, (GLuint)num_groups_z);
    }
    inline void GetTexParameterIuiv(enum TextureTarget target, enum GetTextureParameter pname, GLuint * params){
        glGetTexParameterIuiv((GLenum)target, (GLenum)pname, (GLuint *)params);
    }
    inline void CopyTexSubImage2D(enum TextureTarget target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){
        glCopyTexSubImage2D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void GetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog){
        glGetShaderInfoLog((GLuint)shader, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)infoLog);
    }
    inline void GetTexParameteriv(enum TextureTarget target, enum GetTextureParameter pname, GLint * params){
        glGetTexParameteriv((GLenum)target, (GLenum)pname, (GLint *)params);
    }
    inline void QueryCounter(GLuint id, enum QueryCounterTarget target){
        glQueryCounter((GLuint)id, (GLenum)target);
    }
    inline void RenderbufferStorageMultisample(enum RenderbufferTarget target, GLsizei samples, enum InternalFormat internalformat, GLsizei width, GLsizei height){
        glRenderbufferStorageMultisample((GLenum)target, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);
    }
    inline void DepthMask(enum Boolean flag){
        glDepthMask((GLboolean)flag);
    }
    inline void PixelStoref(enum PixelStoreParameter pname, GLfloat param){
        glPixelStoref((GLenum)pname, (GLfloat)param);
    }
    inline void Uniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w){
        glUniform4d((GLint)location, (GLdouble)x, (GLdouble)y, (GLdouble)z, (GLdouble)w);
    }
    inline GLboolean IsProgram(GLuint program){
        return glIsProgram((GLuint)program);
    }
    inline void VertexAttribI1i(GLuint index, GLint x){
        glVertexAttribI1i((GLuint)index, (GLint)x);
    }
    inline void Disable(enum EnableCap cap){
        glDisable((GLenum)cap);
    }
    inline void GenProgramPipelines(GLsizei n, GLuint * pipelines){
        glGenProgramPipelines((GLsizei)n, (GLuint *)pipelines);
    }
    inline void DrawBuffer(enum DrawBufferMode buf){
        glDrawBuffer((GLenum)buf);
    }
    inline void Uniform4fv(GLint location, GLsizei count, const GLfloat * value){
        glUniform4fv((GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline void VertexAttrib3sv(GLuint index, const GLshort * v){
        glVertexAttrib3sv((GLuint)index, (const GLshort *)v);
    }
    inline void GetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog){
        glGetProgramInfoLog((GLuint)program, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)infoLog);
    }
    inline void MultiTexCoordP1uiv(enum TextureUnit texture, enum TexCoordPointerType type, const GLuint * coords){
        glMultiTexCoordP1uiv((GLenum)texture, (GLenum)type, (const GLuint *)coords);
    }
    inline void BlendEquationSeparatei(GLuint buf, enum BlendEquationModeEXT modeRGB, enum BlendEquationModeEXT modeAlpha){
        glBlendEquationSeparatei((GLuint)buf, (GLenum)modeRGB, (GLenum)modeAlpha);
    }
    inline const  GLubyte  * GetString(enum StringName name){
        return glGetString((GLenum)name);
    }
    inline void Clear(enum ClearBufferMask mask){
        glClear((GLbitfield)mask);
    }
    inline void ClearBufferuiv(enum BufferBit buffer, GLint drawbuffer, const GLuint * value){
        glClearBufferuiv((GLenum)buffer, (GLint)drawbuffer, (const GLuint *)value);
    }
    inline void LogicOp(enum LogicOp opcode){
        glLogicOp((GLenum)opcode);
    }
    inline void VertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor){
        glVertexArrayBindingDivisor((GLuint)vaobj, (GLuint)bindingindex, (GLuint)divisor);
    }
    inline void PixelStorei(enum PixelStoreParameter pname, GLint param){
        glPixelStorei((GLenum)pname, (GLint)param);
    }
    inline void UniformMatrix4x2fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix4x2fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void BindVertexArray(GLuint array){
        glBindVertexArray((GLuint)array);
    }
    inline void GetUniformfv(GLuint program, GLint location, GLfloat * params){
        glGetUniformfv((GLuint)program, (GLint)location, (GLfloat *)params);
    }
    inline void CompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, enum InternalFormat format, GLsizei imageSize, const void * data){
        glCompressedTextureSubImage2D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLsizei)imageSize, (const void *)data);
    }
    inline void Uniform2f(GLint location, GLfloat v0, GLfloat v1){
        glUniform2f((GLint)location, (GLfloat)v0, (GLfloat)v1);
    }
    inline void DeleteBuffers(GLsizei n, const GLuint * buffers){
        glDeleteBuffers((GLsizei)n, (const GLuint *)buffers);
    }
    inline void VertexAttrib1s(GLuint index, GLshort x){
        glVertexAttrib1s((GLuint)index, (GLshort)x);
    }
    inline void Uniform3dv(GLint location, GLsizei count, const GLdouble * value){
        glUniform3dv((GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline void VertexAttribIPointer(GLuint index, GLint size, enum VertexAttribIType type, GLsizei stride, const void * pointer){
        glVertexAttribIPointer((GLuint)index, (GLint)size, (GLenum)type, (GLsizei)stride, (const void *)pointer);
    }
    inline void ColorMask(enum Boolean red, enum Boolean green, enum Boolean blue, enum Boolean alpha){
        glColorMask((GLboolean)red, (GLboolean)green, (GLboolean)blue, (GLboolean)alpha);
    }
    inline void VertexP3ui(enum VertexPointerType type, GLuint value){
        glVertexP3ui((GLenum)type, (GLuint)value);
    }
    inline void UniformMatrix2dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix2dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void StencilFunc(enum StencilFunction func, GLint ref, GLuint mask){
        glStencilFunc((GLenum)func, (GLint)ref, (GLuint)mask);
    }
    inline GLboolean IsTexture(GLuint texture){
        return glIsTexture((GLuint)texture);
    }
    inline void DrawRangeElements(enum PrimitiveType mode, GLuint start, GLuint end, GLsizei count, enum DrawElementsType type, const void * indices){
        glDrawRangeElements((GLenum)mode, (GLuint)start, (GLuint)end, (GLsizei)count, (GLenum)type, (const void *)indices);
    }
    inline void UniformMatrix3x4dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix3x4dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void VertexAttrib1f(GLuint index, GLfloat x){
        glVertexAttrib1f((GLuint)index, (GLfloat)x);
    }
    inline void GetUniformiv(GLuint program, GLint location, GLint * params){
        glGetUniformiv((GLuint)program, (GLint)location, (GLint *)params);
    }
    inline void DrawBuffers(GLsizei n, const DrawBufferMode * bufs){
        glDrawBuffers((GLsizei)n, (const GLenum *)bufs);
    }
    inline void VertexAttrib4usv(GLuint index, const GLushort * v){
        glVertexAttrib4usv((GLuint)index, (const GLushort *)v);
    }
    inline void FramebufferTexture2D(enum FramebufferTarget target, enum FramebufferAttachment attachment, enum TextureTarget textarget, GLuint texture, GLint level){
        glFramebufferTexture2D((GLenum)target, (GLenum)attachment, (GLenum)textarget, (GLuint)texture, (GLint)level);
    }
    inline void GetInternalformativ(enum TextureTarget target, enum InternalFormat internalformat, enum InternalFormatPName pname, GLsizei count, GLint * params){
        glGetInternalformativ((GLenum)target, (GLenum)internalformat, (GLenum)pname, (GLsizei)count, (GLint *)params);
    }
    inline void GenTextures(GLsizei n, GLuint * textures){
        glGenTextures((GLsizei)n, (GLuint *)textures);
    }
    inline void CopyTexSubImage1D(enum TextureTarget target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){
        glCopyTexSubImage1D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)x, (GLint)y, (GLsizei)width);
    }
    inline void ActiveTexture(enum TextureUnit texture){
        glActiveTexture((GLenum)texture);
    }
    inline void VertexAttrib4sv(GLuint index, const GLshort * v){
        glVertexAttrib4sv((GLuint)index, (const GLshort *)v);
    }
    inline void GetQueryObjectuiv(GLuint id, enum QueryObjectParameterName pname, GLuint * params){
        glGetQueryObjectuiv((GLuint)id, (GLenum)pname, (GLuint *)params);
    }
    inline GLboolean IsRenderbuffer(GLuint renderbuffer){
        return glIsRenderbuffer((GLuint)renderbuffer);
    }
    inline GLint GetAttribLocation(GLuint program, const GLchar * name){
        return glGetAttribLocation((GLuint)program, (const GLchar *)name);
    }
    inline void Uniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){
        glUniform4ui((GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2, (GLuint)v3);
    }
    inline void BindRenderbuffer(enum RenderbufferTarget target, GLuint renderbuffer){
        glBindRenderbuffer((GLenum)target, (GLuint)renderbuffer);
    }
    inline void CompressedTexImage3D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data){
        glCompressedTexImage3D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLint)border, (GLsizei)imageSize, (const void *)data);
    }
    inline void VertexAttribI2uiv(GLuint index, const GLuint * v){
        glVertexAttribI2uiv((GLuint)index, (const GLuint *)v);
    }
    inline void CompressedTexImage2D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data){
        glCompressedTexImage2D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLint)border, (GLsizei)imageSize, (const void *)data);
    }
    inline void CompressedTexSubImage3D(enum TextureTarget target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, enum InternalFormat format, GLsizei imageSize, const void * data){
        glCompressedTexSubImage3D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLsizei)imageSize, (const void *)data);
    }
    inline void Uniform2fv(GLint location, GLsizei count, const GLfloat * value){
        glUniform2fv((GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline void VertexAttribI4usv(GLuint index, const GLushort * v){
        glVertexAttribI4usv((GLuint)index, (const GLushort *)v);
    }
    inline void DeleteTextures(GLsizei n, const GLuint * textures){
        glDeleteTextures((GLsizei)n, (const GLuint *)textures);
    }
    inline void TexCoordP2ui(enum TexCoordPointerType type, GLuint coords){
        glTexCoordP2ui((GLenum)type, (GLuint)coords);
    }
    inline void GetBufferPointerv(enum BufferTargetARB target, enum BufferPointerNameARB pname, void ** params){
        glGetBufferPointerv((GLenum)target, (GLenum)pname, (void **)params);
    }
    inline void CompressedTexSubImage1D(enum TextureTarget target, GLint level, GLint xoffset, GLsizei width, enum InternalFormat format, GLsizei imageSize, const void * data){
        glCompressedTexSubImage1D((GLenum)target, (GLint)level, (GLint)xoffset, (GLsizei)width, (GLenum)format, (GLsizei)imageSize, (const void *)data);
    }
    inline void DrawTransformFeedbackInstanced(enum PrimitiveType mode, GLuint id, GLsizei instancecount){
        glDrawTransformFeedbackInstanced((GLenum)mode, (GLuint)id, (GLsizei)instancecount);
    }
    inline void BindAttribLocation(GLuint program, GLuint index, const GLchar * name){
        glBindAttribLocation((GLuint)program, (GLuint)index, (const GLchar *)name);
    }
    inline void ReadBuffer(enum ReadBufferMode src){
        glReadBuffer((GLenum)src);
    }
    inline GLint GetFragDataIndex(GLuint program, const GLchar * name){
        return glGetFragDataIndex((GLuint)program, (const GLchar *)name);
    }
    inline void GetVertexAttribIuiv(GLuint index, enum VertexAttribEnum pname, GLuint * params){
        glGetVertexAttribIuiv((GLuint)index, (GLenum)pname, (GLuint *)params);
    }
    inline void BlendEquationSeparate(enum BlendEquationModeEXT modeRGB, enum BlendEquationModeEXT modeAlpha){
        glBlendEquationSeparate((GLenum)modeRGB, (GLenum)modeAlpha);
    }
    inline void ClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){
        glClearColor((GLfloat)red, (GLfloat)green, (GLfloat)blue, (GLfloat)alpha);
    }
    inline void ClearBufferfv(enum BufferBit buffer, GLint drawbuffer, const GLfloat * value){
        glClearBufferfv((GLenum)buffer, (GLint)drawbuffer, (const GLfloat *)value);
    }
    inline void VertexAttribP3uiv(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, const GLuint * value){
        glVertexAttribP3uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, (const GLuint *)value);
    }
    inline GLboolean IsEnabledi(enum EnableCap target, GLuint index){
        return glIsEnabledi((GLenum)target, (GLuint)index);
    }
    inline void FlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length){
        glFlushMappedNamedBufferRange((GLuint)buffer, (GLintptr)offset, (GLsizeiptr)length);
    }
    inline void PolygonOffset(GLfloat factor, GLfloat units){
        glPolygonOffset((GLfloat)factor, (GLfloat)units);
    }
    inline void PointParameteriv(enum PointParameterNameARB pname, const GLint * params){
        glPointParameteriv((GLenum)pname, (const GLint *)params);
    }
    inline void VertexAttrib4Nsv(GLuint index, const GLshort * v){
        glVertexAttrib4Nsv((GLuint)index, (const GLshort *)v);
    }
    inline void VertexAttrib2fv(GLuint index, const GLfloat * v){
        glVertexAttrib2fv((GLuint)index, (const GLfloat *)v);
    }
    inline void GenQueries(GLsizei n, GLuint * ids){
        glGenQueries((GLsizei)n, (GLuint *)ids);
    }
    inline void GetQueryObjectiv(GLuint id, enum QueryObjectParameterName pname, GLint * params){
        glGetQueryObjectiv((GLuint)id, (GLenum)pname, (GLint *)params);
    }
    inline void EndQuery(enum QueryTarget target){
        glEndQuery((GLenum)target);
    }
    inline void BlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){
        glBlendColor((GLfloat)red, (GLfloat)green, (GLfloat)blue, (GLfloat)alpha);
    }
    inline void VertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z){
        glVertexAttribI3ui((GLuint)index, (GLuint)x, (GLuint)y, (GLuint)z);
    }
    inline void VertexAttribI3i(GLuint index, GLint x, GLint y, GLint z){
        glVertexAttribI3i((GLuint)index, (GLint)x, (GLint)y, (GLint)z);
    }
    inline void CompressedTexSubImage2D(enum TextureTarget target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, enum InternalFormat format, GLsizei imageSize, const void * data){
        glCompressedTexSubImage2D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLsizei)imageSize, (const void *)data);
    }
    inline void VertexAttribP1uiv(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, const GLuint * value){
        glVertexAttribP1uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, (const GLuint *)value);
    }
    inline void ProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){
        glProgramUniform4ui((GLuint)program, (GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2, (GLuint)v3);
    }
    inline void TexSubImage2D(enum TextureTarget target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTexSubImage2D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void VertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z){
        glVertexAttrib3f((GLuint)index, (GLfloat)x, (GLfloat)y, (GLfloat)z);
    }
    inline GLuint CreateShader(enum ShaderType type){
        return glCreateShader((GLenum)type);
    }
    inline void CopyTexImage2D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border){
        glCopyTexImage2D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height, (GLint)border);
    }
    inline void CompressedTexImage1D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data){
        glCompressedTexImage1D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLsizei)width, (GLint)border, (GLsizei)imageSize, (const void *)data);
    }
    inline void Uniform2i(GLint location, GLint v0, GLint v1){
        glUniform2i((GLint)location, (GLint)v0, (GLint)v1);
    }
    inline void PolygonMode(enum TriangleFace face, enum PolygonMode mode){
        glPolygonMode((GLenum)face, (GLenum)mode);
    }
    inline void DeleteShader(GLuint shader){
        glDeleteShader((GLuint)shader);
    }
    inline void TexStorage1D(enum TextureTarget target, GLsizei levels, enum SizedInternalFormat internalformat, GLsizei width){
        glTexStorage1D((GLenum)target, (GLsizei)levels, (GLenum)internalformat, (GLsizei)width);
    }
    inline void VertexAttribI4ubv(GLuint index, const GLubyte * v){
        glVertexAttribI4ubv((GLuint)index, (const GLubyte *)v);
    }
    inline void AttachShader(GLuint program, GLuint shader){
        glAttachShader((GLuint)program, (GLuint)shader);
    }
    inline void DrawElementsIndirect(enum PrimitiveType mode, enum DrawElementsType type, const void * indirect){
        glDrawElementsIndirect((GLenum)mode, (GLenum)type, (const void *)indirect);
    }
    inline void CullFace(enum TriangleFace mode){
        glCullFace((GLenum)mode);
    }
    inline void Uniform1f(GLint location, GLfloat v0){
        glUniform1f((GLint)location, (GLfloat)v0);
    }
    inline void VertexAttrib4Nusv(GLuint index, const GLushort * v){
        glVertexAttrib4Nusv((GLuint)index, (const GLushort *)v);
    }
    inline void Enable(enum EnableCap cap){
        glEnable((GLenum)cap);
    }
    inline void GenBuffers(GLsizei n, GLuint * buffers){
        glGenBuffers((GLsizei)n, (GLuint *)buffers);
    }
    inline void ShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length){
        glShaderSource((GLuint)shader, (GLsizei)count, (const GLchar *const*)string, (const GLint *)length);
    }
    inline void VertexAttribP2ui(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, GLuint value){
        glVertexAttribP2ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);
    }
    inline void Uniform2dv(GLint location, GLsizei count, const GLdouble * value){
        glUniform2dv((GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline GLboolean IsBuffer(GLuint buffer){
        return glIsBuffer((GLuint)buffer);
    }
    inline void TexBuffer(enum TextureTarget target, enum SizedInternalFormat internalformat, GLuint buffer){
        glTexBuffer((GLenum)target, (GLenum)internalformat, (GLuint)buffer);
    }
    inline void DrawArraysIndirect(enum PrimitiveType mode, const void * indirect){
        glDrawArraysIndirect((GLenum)mode, (const void *)indirect);
    }
    inline void MultiDrawArraysIndirect(enum PrimitiveType mode, const void * indirect, GLsizei drawcount, GLsizei stride){
        glMultiDrawArraysIndirect((GLenum)mode, (const void *)indirect, (GLsizei)drawcount, (GLsizei)stride);
    }
    inline void GetBufferParameteriv(enum BufferTargetARB target, enum BufferPNameARB pname, GLint * params){
        glGetBufferParameteriv((GLenum)target, (GLenum)pname, (GLint *)params);
    }
    inline void BufferSubData(enum BufferTargetARB target, GLintptr offset, GLsizeiptr size, const void * data){
        glBufferSubData((GLenum)target, (GLintptr)offset, (GLsizeiptr)size, (const void *)data);
    }
    inline GLboolean IsProgramPipeline(GLuint pipeline){
        return glIsProgramPipeline((GLuint)pipeline);
    }
    inline void MultiDrawElementsIndirect(enum PrimitiveType mode, enum DrawElementsType type, const void * indirect, GLsizei drawcount, GLsizei stride){
        glMultiDrawElementsIndirect((GLenum)mode, (GLenum)type, (const void *)indirect, (GLsizei)drawcount, (GLsizei)stride);
    }
    inline void GetTexParameterIiv(enum TextureTarget target, enum GetTextureParameter pname, GLint * params){
        glGetTexParameterIiv((GLenum)target, (GLenum)pname, (GLint *)params);
    }
    inline void Disablei(enum EnableCap target, GLuint index){
        glDisablei((GLenum)target, (GLuint)index);
    }
    inline void VertexAttribI4iv(GLuint index, const GLint * v){
        glVertexAttribI4iv((GLuint)index, (const GLint *)v);
    }
    inline void VertexAttrib2dv(GLuint index, const GLdouble * v){
        glVertexAttrib2dv((GLuint)index, (const GLdouble *)v);
    }
    inline void TransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, enum TransformFeedbackBufferMode bufferMode){
        glTransformFeedbackVaryings((GLuint)program, (GLsizei)count, (const GLchar *const*)varyings, (GLenum)bufferMode);
    }
    inline void GetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, AttributeType * type, GLchar * name){
        glGetActiveAttrib((GLuint)program, (GLuint)index, (GLsizei)bufSize, (GLsizei *)length, (GLint *)size, (GLenum *)type, (GLchar *)name);
    }
    inline void BindSampler(GLuint unit, GLuint sampler){
        glBindSampler((GLuint)unit, (GLuint)sampler);
    }
    inline void GetVertexAttribIiv(GLuint index, enum VertexAttribEnum pname, GLint * params){
        glGetVertexAttribIiv((GLuint)index, (GLenum)pname, (GLint *)params);
    }
    inline void CompileShader(GLuint shader){
        glCompileShader((GLuint)shader);
    }
    inline void DeleteFramebuffers(GLsizei n, const GLuint * framebuffers){
        glDeleteFramebuffers((GLsizei)n, (const GLuint *)framebuffers);
    }
    inline void Finish(){
        glFinish();
    }
    inline void VertexAttribP3ui(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, GLuint value){
        glVertexAttribP3ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);
    }
    inline GLboolean IsTransformFeedback(GLuint id){
        return glIsTransformFeedback((GLuint)id);
    }
    inline void EndTransformFeedback(){
        glEndTransformFeedback();
    }
    inline void ProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value){
        glProgramUniform3fv((GLuint)program, (GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline void ViewportArrayv(GLuint first, GLsizei count, const GLfloat * v){
        glViewportArrayv((GLuint)first, (GLsizei)count, (const GLfloat *)v);
    }
    inline void BlendEquation(enum BlendEquationModeEXT mode){
        glBlendEquation((GLenum)mode);
    }
    inline void TextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTextureSubImage2D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void ProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value){
        glProgramUniform1uiv((GLuint)program, (GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void VertexAttribLPointer(GLuint index, GLint size, enum VertexAttribLType type, GLsizei stride, const void * pointer){
        glVertexAttribLPointer((GLuint)index, (GLint)size, (GLenum)type, (GLsizei)stride, (const void *)pointer);
    }
    inline void InvalidateTexImage(GLuint texture, GLint level){
        glInvalidateTexImage((GLuint)texture, (GLint)level);
    }
    inline void GetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, UniformType * type, GLchar * name){
        glGetActiveUniform((GLuint)program, (GLuint)index, (GLsizei)bufSize, (GLsizei *)length, (GLint *)size, (GLenum *)type, (GLchar *)name);
    }
    inline void Uniform3iv(GLint location, GLsizei count, const GLint * value){
        glUniform3iv((GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline void GetProgramiv(GLuint program, enum ProgramPropertyARB pname, GLint * params){
        glGetProgramiv((GLuint)program, (GLenum)pname, (GLint *)params);
    }
    inline void GetVertexAttribiv(GLuint index, enum VertexAttribPropertyARB pname, GLint * params){
        glGetVertexAttribiv((GLuint)index, (GLenum)pname, (GLint *)params);
    }
    inline void ProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix3fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void ProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix2x3fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void FrontFace(enum FrontFaceDirection mode){
        glFrontFace((GLenum)mode);
    }
    inline void GetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source){
        glGetShaderSource((GLuint)shader, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)source);
    }
    inline GLenum ClientWaitSync(GLsync sync, enum SyncObjectMask flags, GLuint64 timeout){
        return glClientWaitSync((GLsync)sync, (GLbitfield)flags, (GLuint64)timeout);
    }
    inline void DrawTransformFeedback(enum PrimitiveType mode, GLuint id){
        glDrawTransformFeedback((GLenum)mode, (GLuint)id);
    }
    inline const  GLubyte  * GetStringi(enum StringName name, GLuint index){
        return glGetStringi((GLenum)name, (GLuint)index);
    }
    inline void VertexAttribI4sv(GLuint index, const GLshort * v){
        glVertexAttribI4sv((GLuint)index, (const GLshort *)v);
    }
    inline GLint GetUniformLocation(GLuint program, const GLchar * name){
        return glGetUniformLocation((GLuint)program, (const GLchar *)name);
    }
    inline void DeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers){
        glDeleteRenderbuffers((GLsizei)n, (const GLuint *)renderbuffers);
    }
    inline void Enablei(enum EnableCap target, GLuint index){
        glEnablei((GLenum)target, (GLuint)index);
    }
    inline void ProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value){
        glProgramUniform1iv((GLuint)program, (GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline GLboolean IsFramebuffer(GLuint framebuffer){
        return glIsFramebuffer((GLuint)framebuffer);
    }
    inline void NamedFramebufferDrawBuffer(GLuint framebuffer, enum ColorBuffer buf){
        glNamedFramebufferDrawBuffer((GLuint)framebuffer, (GLenum)buf);
    }
    inline void Scissor(GLint x, GLint y, GLsizei width, GLsizei height){
        glScissor((GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void BindFramebuffer(enum FramebufferTarget target, GLuint framebuffer){
        glBindFramebuffer((GLenum)target, (GLuint)framebuffer);
    }
    inline GLenum CheckFramebufferStatus(enum FramebufferTarget target){
        return glCheckFramebufferStatus((GLenum)target);
    }
    inline void GetnPolygonStipple(GLsizei bufSize, GLubyte * pattern){
        glGetnPolygonStipple((GLsizei)bufSize, (GLubyte *)pattern);
    }
    inline void StencilOpSeparate(enum TriangleFace face, enum StencilOp sfail, enum StencilOp dpfail, enum StencilOp dppass){
        glStencilOpSeparate((GLenum)face, (GLenum)sfail, (GLenum)dpfail, (GLenum)dppass);
    }
    inline void TexCoordP4ui(enum TexCoordPointerType type, GLuint coords){
        glTexCoordP4ui((GLenum)type, (GLuint)coords);
    }
    inline void CompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, enum InternalFormat format, GLsizei imageSize, const void * data){
        glCompressedTextureSubImage3D((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLsizei)imageSize, (const void *)data);
    }
    inline void FramebufferTexture1D(enum FramebufferTarget target, enum FramebufferAttachment attachment, enum TextureTarget textarget, GLuint texture, GLint level){
        glFramebufferTexture1D((GLenum)target, (GLenum)attachment, (GLenum)textarget, (GLuint)texture, (GLint)level);
    }
    inline void GetTexImage(enum TextureTarget target, GLint level, enum PixelFormat format, enum PixelType type, void * pixels){
        glGetTexImage((GLenum)target, (GLint)level, (GLenum)format, (GLenum)type, (void *)pixels);
    }
    inline void DeleteVertexArrays(GLsizei n, const GLuint * arrays){
        glDeleteVertexArrays((GLsizei)n, (const GLuint *)arrays);
    }
    inline GLuint GetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName){
        return glGetUniformBlockIndex((GLuint)program, (const GLchar *)uniformBlockName);
    }
    inline void GetSamplerParameteriv(GLuint sampler, enum SamplerParameterI pname, GLint * params){
        glGetSamplerParameteriv((GLuint)sampler, (GLenum)pname, (GLint *)params);
    }
    inline void GetBufferSubData(enum BufferTargetARB target, GLintptr offset, GLsizeiptr size, void * data){
        glGetBufferSubData((GLenum)target, (GLintptr)offset, (GLsizeiptr)size, (void *)data);
    }
    inline void FramebufferRenderbuffer(enum FramebufferTarget target, enum FramebufferAttachment attachment, enum RenderbufferTarget renderbuffertarget, GLuint renderbuffer){
        glFramebufferRenderbuffer((GLenum)target, (GLenum)attachment, (GLenum)renderbuffertarget, (GLuint)renderbuffer);
    }
    inline void BlendFunci(GLuint buf, enum BlendingFactor src, enum BlendingFactor dst){
        glBlendFunci((GLuint)buf, (GLenum)src, (GLenum)dst);
    }
    inline void BlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, enum ClearBufferMask mask, enum BlitFramebufferFilter filter){
        glBlitFramebuffer((GLint)srcX0, (GLint)srcY0, (GLint)srcX1, (GLint)srcY1, (GLint)dstX0, (GLint)dstY0, (GLint)dstX1, (GLint)dstY1, (GLbitfield)mask, (GLenum)filter);
    }
    inline void DepthFunc(enum DepthFunction func){
        glDepthFunc((GLenum)func);
    }
    inline void FramebufferTextureLayer(enum FramebufferTarget target, enum FramebufferAttachment attachment, GLuint texture, GLint level, GLint layer){
        glFramebufferTextureLayer((GLenum)target, (GLenum)attachment, (GLuint)texture, (GLint)level, (GLint)layer);
    }
    inline void GenVertexArrays(GLsizei n, GLuint * arrays){
        glGenVertexArrays((GLsizei)n, (GLuint *)arrays);
    }
    inline GLboolean IsVertexArray(GLuint array){
        return glIsVertexArray((GLuint)array);
    }
    inline void VertexAttribI1uiv(GLuint index, const GLuint * v){
        glVertexAttribI1uiv((GLuint)index, (const GLuint *)v);
    }
    inline void DrawArraysInstanced(enum PrimitiveType mode, GLint first, GLsizei count, GLsizei instancecount){
        glDrawArraysInstanced((GLenum)mode, (GLint)first, (GLsizei)count, (GLsizei)instancecount);
    }
    inline void CopyBufferSubData(enum CopyBufferSubDataTarget readTarget, enum CopyBufferSubDataTarget writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){
        glCopyBufferSubData((GLenum)readTarget, (GLenum)writeTarget, (GLintptr)readOffset, (GLintptr)writeOffset, (GLsizeiptr)size);
    }
    inline void GetUniformdv(GLuint program, GLint location, GLdouble * params){
        glGetUniformdv((GLuint)program, (GLint)location, (GLdouble *)params);
    }
    inline void Uniform1uiv(GLint location, GLsizei count, const GLuint * value){
        glUniform1uiv((GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void ProgramParameteri(GLuint program, enum ProgramParameterPName pname, GLint value){
        glProgramParameteri((GLuint)program, (GLenum)pname, (GLint)value);
    }
    inline void GenSamplers(GLsizei count, GLuint * samplers){
        glGenSamplers((GLsizei)count, (GLuint *)samplers);
    }
    inline void DeleteQueries(GLsizei n, const GLuint * ids){
        glDeleteQueries((GLsizei)n, (const GLuint *)ids);
    }
    inline void GetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, enum UniformBlockPName pname, GLint * params){
        glGetActiveUniformBlockiv((GLuint)program, (GLuint)uniformBlockIndex, (GLenum)pname, (GLint *)params);
    }
    inline void UniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding){
        glUniformBlockBinding((GLuint)program, (GLuint)uniformBlockIndex, (GLuint)uniformBlockBinding);
    }
    inline void MultiDrawElements(enum PrimitiveType mode, const GLsizei * count, enum DrawElementsType type, const void *const* indices, GLsizei drawcount){
        glMultiDrawElements((GLenum)mode, (const GLsizei *)count, (GLenum)type, (const void *const*)indices, (GLsizei)drawcount);
    }
    inline void UniformMatrix2x4dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix2x4dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void GetProgramStageiv(GLuint program, enum ShaderType shadertype, enum ProgramStagePName pname, GLint * values){
        glGetProgramStageiv((GLuint)program, (GLenum)shadertype, (GLenum)pname, (GLint *)values);
    }
    inline void ColorMaski(GLuint index, enum Boolean r, enum Boolean g, enum Boolean b, enum Boolean a){
        glColorMaski((GLuint)index, (GLboolean)r, (GLboolean)g, (GLboolean)b, (GLboolean)a);
    }
    inline void ProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value){
        glProgramUniform4dv((GLuint)program, (GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline void DrawElementsBaseVertex(enum PrimitiveType mode, GLsizei count, enum DrawElementsType type, const void * indices, GLint basevertex){
        glDrawElementsBaseVertex((GLenum)mode, (GLsizei)count, (GLenum)type, (const void *)indices, (GLint)basevertex);
    }
    inline void DrawRangeElementsBaseVertex(enum PrimitiveType mode, GLuint start, GLuint end, GLsizei count, enum DrawElementsType type, const void * indices, GLint basevertex){
        glDrawRangeElementsBaseVertex((GLenum)mode, (GLuint)start, (GLuint)end, (GLsizei)count, (GLenum)type, (const void *)indices, (GLint)basevertex);
    }
    inline void DrawElementsInstancedBaseVertex(enum PrimitiveType mode, GLsizei count, enum DrawElementsType type, const void * indices, GLsizei instancecount, GLint basevertex){
        glDrawElementsInstancedBaseVertex((GLenum)mode, (GLsizei)count, (GLenum)type, (const void *)indices, (GLsizei)instancecount, (GLint)basevertex);
    }
    inline void NamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const ColorBuffer * bufs){
        glNamedFramebufferDrawBuffers((GLuint)framebuffer, (GLsizei)n, (const GLenum *)bufs);
    }
    inline void DrawElementsInstanced(enum PrimitiveType mode, GLsizei count, enum DrawElementsType type, const void * indices, GLsizei instancecount){
        glDrawElementsInstanced((GLenum)mode, (GLsizei)count, (GLenum)type, (const void *)indices, (GLsizei)instancecount);
    }
    inline void ProvokingVertex(enum VertexProvokingMode mode){
        glProvokingVertex((GLenum)mode);
    }
    inline void Uniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3){
        glUniform4i((GLint)location, (GLint)v0, (GLint)v1, (GLint)v2, (GLint)v3);
    }
    inline GLsync FenceSync(enum SyncCondition condition, enum SyncBehaviorFlags flags){
        return glFenceSync((GLenum)condition, (GLbitfield)flags);
    }
    inline void Uniform2ui(GLint location, GLuint v0, GLuint v1){
        glUniform2ui((GLint)location, (GLuint)v0, (GLuint)v1);
    }
    inline GLboolean IsSync(GLsync sync){
        return glIsSync((GLsync)sync);
    }
    inline void DeleteProgram(GLuint program){
        glDeleteProgram((GLuint)program);
    }
    inline GLint GetProgramResourceLocation(GLuint program, enum ProgramInterface programInterface, const GLchar * name){
        return glGetProgramResourceLocation((GLuint)program, (GLenum)programInterface, (const GLchar *)name);
    }
    inline void VertexAttribI2i(GLuint index, GLint x, GLint y){
        glVertexAttribI2i((GLuint)index, (GLint)x, (GLint)y);
    }
    inline void DeleteSync(GLsync sync){
        glDeleteSync((GLsync)sync);
    }
    inline void MultiTexCoordP2uiv(enum TextureUnit texture, enum TexCoordPointerType type, const GLuint * coords){
        glMultiTexCoordP2uiv((GLenum)texture, (GLenum)type, (const GLuint *)coords);
    }
    inline void GetSynciv(GLsync sync, enum SyncParameterName pname, GLsizei count, GLsizei * length, GLint * values){
        glGetSynciv((GLsync)sync, (GLenum)pname, (GLsizei)count, (GLsizei *)length, (GLint *)values);
    }
    inline void GetInteger64i_v(enum GetPName target, GLuint index, GLint64 * data){
        glGetInteger64i_v((GLenum)target, (GLuint)index, (GLint64 *)data);
    }
    inline void TexImage3DMultisample(enum TextureTarget target, GLsizei samples, enum InternalFormat internalformat, GLsizei width, GLsizei height, GLsizei depth, enum Boolean fixedsamplelocations){
        glTexImage3DMultisample((GLenum)target, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLboolean)fixedsamplelocations);
    }
    inline void DepthRange(GLdouble n, GLdouble f){
        glDepthRange((GLdouble)n, (GLdouble)f);
    }
    inline void SampleMaski(GLuint maskNumber, GLbitfield mask){
        glSampleMaski((GLuint)maskNumber, (GLbitfield)mask);
    }
    inline void Uniform4uiv(GLint location, GLsizei count, const GLuint * value){
        glUniform4uiv((GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void GetActiveSubroutineUniformName(GLuint program, enum ShaderType shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name){
        glGetActiveSubroutineUniformName((GLuint)program, (GLenum)shadertype, (GLuint)index, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)name);
    }
    inline void DeleteSamplers(GLsizei count, const GLuint * samplers){
        glDeleteSamplers((GLsizei)count, (const GLuint *)samplers);
    }
    inline void UniformMatrix4dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix4dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline GLboolean IsSampler(GLuint sampler){
        return glIsSampler((GLuint)sampler);
    }
    inline void GenRenderbuffers(GLsizei n, GLuint * renderbuffers){
        glGenRenderbuffers((GLsizei)n, (GLuint *)renderbuffers);
    }
    inline void TexCoordP4uiv(enum TexCoordPointerType type, const GLuint * coords){
        glTexCoordP4uiv((GLenum)type, (const GLuint *)coords);
    }
    inline void ClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, enum PixelFormat format, enum PixelType type, const void * data){
        glClearTexSubImage((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLenum)type, (const void *)data);
    }
    inline void SamplerParameteri(GLuint sampler, enum SamplerParameterI pname, GLint param){
        glSamplerParameteri((GLuint)sampler, (GLenum)pname, (GLint)param);
    }
    inline void SamplerParameteriv(GLuint sampler, enum SamplerParameterI pname, const GLint * param){
        glSamplerParameteriv((GLuint)sampler, (GLenum)pname, (const GLint *)param);
    }
    inline void SamplerParameterIiv(GLuint sampler, enum SamplerParameterI pname, const GLint * param){
        glSamplerParameterIiv((GLuint)sampler, (GLenum)pname, (const GLint *)param);
    }
    inline void GetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, enum AtomicCounterBufferPName pname, GLint * params){
        glGetActiveAtomicCounterBufferiv((GLuint)program, (GLuint)bufferIndex, (GLenum)pname, (GLint *)params);
    }
    inline void SamplerParameterIuiv(GLuint sampler, enum SamplerParameterI pname, const GLuint * param){
        glSamplerParameterIuiv((GLuint)sampler, (GLenum)pname, (const GLuint *)param);
    }
    inline void GetVertexAttribPointerv(GLuint index, enum VertexAttribPointerPropertyARB pname, void ** pointer){
        glGetVertexAttribPointerv((GLuint)index, (GLenum)pname, (void **)pointer);
    }
    inline void GetDoublei_v(enum GetPName target, GLuint index, GLdouble * data){
        glGetDoublei_v((GLenum)target, (GLuint)index, (GLdouble *)data);
    }
    inline void GetSamplerParameterIiv(GLuint sampler, enum SamplerParameterI pname, GLint * params){
        glGetSamplerParameterIiv((GLuint)sampler, (GLenum)pname, (GLint *)params);
    }
    inline void TexStorage3D(enum TextureTarget target, GLsizei levels, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height, GLsizei depth){
        glTexStorage3D((GLenum)target, (GLsizei)levels, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth);
    }
    inline void GetSamplerParameterfv(GLuint sampler, enum SamplerParameterF pname, GLfloat * params){
        glGetSamplerParameterfv((GLuint)sampler, (GLenum)pname, (GLfloat *)params);
    }
    inline void GetSamplerParameterIuiv(GLuint sampler, enum SamplerParameterI pname, GLuint * params){
        glGetSamplerParameterIuiv((GLuint)sampler, (GLenum)pname, (GLuint *)params);
    }
    inline void GetQueryObjecti64v(GLuint id, enum QueryObjectParameterName pname, GLint64 * params){
        glGetQueryObjecti64v((GLuint)id, (GLenum)pname, (GLint64 *)params);
    }
    inline void GetQueryObjectui64v(GLuint id, enum QueryObjectParameterName pname, GLuint64 * params){
        glGetQueryObjectui64v((GLuint)id, (GLenum)pname, (GLuint64 *)params);
    }
    inline void VertexAttribP1ui(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, GLuint value){
        glVertexAttribP1ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);
    }
    inline void VertexAttribP4ui(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, GLuint value){
        glVertexAttribP4ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);
    }
    inline void GetTextureLevelParameteriv(GLuint texture, GLint level, enum GetTextureParameter pname, GLint * params){
        glGetTextureLevelParameteriv((GLuint)texture, (GLint)level, (GLenum)pname, (GLint *)params);
    }
    inline void VertexAttribP4uiv(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, const GLuint * value){
        glVertexAttribP4uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, (const GLuint *)value);
    }
    inline void VertexP2ui(enum VertexPointerType type, GLuint value){
        glVertexP2ui((GLenum)type, (GLuint)value);
    }
    inline void VertexP3uiv(enum VertexPointerType type, const GLuint * value){
        glVertexP3uiv((GLenum)type, (const GLuint *)value);
    }
    inline void UniformMatrix2x3fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix2x3fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void VertexP4ui(enum VertexPointerType type, GLuint value){
        glVertexP4ui((GLenum)type, (GLuint)value);
    }
    inline void GetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog){
        glGetProgramPipelineInfoLog((GLuint)pipeline, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)infoLog);
    }
    inline void VertexP4uiv(enum VertexPointerType type, const GLuint * value){
        glVertexP4uiv((GLenum)type, (const GLuint *)value);
    }
    inline void TexCoordP1ui(enum TexCoordPointerType type, GLuint coords){
        glTexCoordP1ui((GLenum)type, (GLuint)coords);
    }
    inline void TexCoordP1uiv(enum TexCoordPointerType type, const GLuint * coords){
        glTexCoordP1uiv((GLenum)type, (const GLuint *)coords);
    }
    inline void InvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const FramebufferAttachment * attachments){
        glInvalidateNamedFramebufferData((GLuint)framebuffer, (GLsizei)numAttachments, (const GLenum *)attachments);
    }
    inline void TexCoordP2uiv(enum TexCoordPointerType type, const GLuint * coords){
        glTexCoordP2uiv((GLenum)type, (const GLuint *)coords);
    }
    inline void ProgramUniform1ui(GLuint program, GLint location, GLuint v0){
        glProgramUniform1ui((GLuint)program, (GLint)location, (GLuint)v0);
    }
    inline void RenderbufferStorage(enum RenderbufferTarget target, enum InternalFormat internalformat, GLsizei width, GLsizei height){
        glRenderbufferStorage((GLenum)target, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);
    }
    inline void TexCoordP3ui(enum TexCoordPointerType type, GLuint coords){
        glTexCoordP3ui((GLenum)type, (GLuint)coords);
    }
    inline void TexCoordP3uiv(enum TexCoordPointerType type, const GLuint * coords){
        glTexCoordP3uiv((GLenum)type, (const GLuint *)coords);
    }
    inline void MultiTexCoordP1ui(enum TextureUnit texture, enum TexCoordPointerType type, GLuint coords){
        glMultiTexCoordP1ui((GLenum)texture, (GLenum)type, (GLuint)coords);
    }
    inline void LinkProgram(GLuint program){
        glLinkProgram((GLuint)program);
    }
    inline void MultiTexCoordP2ui(enum TextureUnit texture, enum TexCoordPointerType type, GLuint coords){
        glMultiTexCoordP2ui((GLenum)texture, (GLenum)type, (GLuint)coords);
    }
    inline void MultiTexCoordP3ui(enum TextureUnit texture, enum TexCoordPointerType type, GLuint coords){
        glMultiTexCoordP3ui((GLenum)texture, (GLenum)type, (GLuint)coords);
    }
    inline GLboolean IsShader(GLuint shader){
        return glIsShader((GLuint)shader);
    }
    inline void GetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName){
        glGetActiveUniformName((GLuint)program, (GLuint)uniformIndex, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)uniformName);
    }
    inline void MultiTexCoordP4ui(enum TextureUnit texture, enum TexCoordPointerType type, GLuint coords){
        glMultiTexCoordP4ui((GLenum)texture, (GLenum)type, (GLuint)coords);
    }
    inline void NormalP3ui(enum NormalPointerType type, GLuint coords){
        glNormalP3ui((GLenum)type, (GLuint)coords);
    }
    inline void ColorP3ui(enum ColorPointerType type, GLuint color){
        glColorP3ui((GLenum)type, (GLuint)color);
    }
    inline void NamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, enum InternalFormat internalformat, GLsizei width, GLsizei height){
        glNamedRenderbufferStorageMultisample((GLuint)renderbuffer, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);
    }
    inline void ColorP3uiv(enum ColorPointerType type, const GLuint * color){
        glColorP3uiv((GLenum)type, (const GLuint *)color);
    }
    inline void ColorP4ui(enum ColorPointerType type, GLuint color){
        glColorP4ui((GLenum)type, (GLuint)color);
    }
    inline void VertexAttrib1d(GLuint index, GLdouble x){
        glVertexAttrib1d((GLuint)index, (GLdouble)x);
    }
    inline void GenFramebuffers(GLsizei n, GLuint * framebuffers){
        glGenFramebuffers((GLsizei)n, (GLuint *)framebuffers);
    }
    inline void ColorP4uiv(enum ColorPointerType type, const GLuint * color){
        glColorP4uiv((GLenum)type, (const GLuint *)color);
    }
    inline void ProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value){
        glProgramUniform1fv((GLuint)program, (GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline void ProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix2x4dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void SecondaryColorP3ui(enum ColorPointerType type, GLuint color){
        glSecondaryColorP3ui((GLenum)type, (GLuint)color);
    }
    inline void Uniform1ui(GLint location, GLuint v0){
        glUniform1ui((GLint)location, (GLuint)v0);
    }
    inline void SecondaryColorP3uiv(enum ColorPointerType type, const GLuint * color){
        glSecondaryColorP3uiv((GLenum)type, (const GLuint *)color);
    }
    inline void Uniform1iv(GLint location, GLsizei count, const GLint * value){
        glUniform1iv((GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline void MinSampleShading(GLfloat value){
        glMinSampleShading((GLfloat)value);
    }
    inline void GetFloati_v(enum GetPName target, GLuint index, GLfloat * data){
        glGetFloati_v((GLenum)target, (GLuint)index, (GLfloat *)data);
    }
    inline void BlendEquationi(GLuint buf, enum BlendEquationModeEXT mode){
        glBlendEquationi((GLuint)buf, (GLenum)mode);
    }
    inline void BlendFuncSeparatei(GLuint buf, enum BlendingFactor srcRGB, enum BlendingFactor dstRGB, enum BlendingFactor srcAlpha, enum BlendingFactor dstAlpha){
        glBlendFuncSeparatei((GLuint)buf, (GLenum)srcRGB, (GLenum)dstRGB, (GLenum)srcAlpha, (GLenum)dstAlpha);
    }
    inline void Uniform2d(GLint location, GLdouble x, GLdouble y){
        glUniform2d((GLint)location, (GLdouble)x, (GLdouble)y);
    }
    inline void ResumeTransformFeedback(){
        glResumeTransformFeedback();
    }
    inline void Uniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z){
        glUniform3d((GLint)location, (GLdouble)x, (GLdouble)y, (GLdouble)z);
    }
    inline void Uniform4dv(GLint location, GLsizei count, const GLdouble * value){
        glUniform4dv((GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline void ProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3){
        glProgramUniform4i((GLuint)program, (GLint)location, (GLint)v0, (GLint)v1, (GLint)v2, (GLint)v3);
    }
    inline void GetShaderiv(GLuint shader, enum ShaderParameterName pname, GLint * params){
        glGetShaderiv((GLuint)shader, (GLenum)pname, (GLint *)params);
    }
    inline void UniformMatrix3dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix3dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void VertexAttribP2uiv(GLuint index, enum VertexAttribPointerType type, enum Boolean normalized, const GLuint * value){
        glVertexAttribP2uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, (const GLuint *)value);
    }
    inline void FramebufferParameteri(enum FramebufferTarget target, enum FramebufferParameterName pname, GLint param){
        glFramebufferParameteri((GLenum)target, (GLenum)pname, (GLint)param);
    }
    inline void UniformMatrix3x2dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix3x2dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void UniformMatrix4x2dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix4x2dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void InvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length){
        glInvalidateBufferSubData((GLuint)buffer, (GLintptr)offset, (GLsizeiptr)length);
    }
    inline void DrawArraysInstancedBaseInstance(enum PrimitiveType mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance){
        glDrawArraysInstancedBaseInstance((GLenum)mode, (GLint)first, (GLsizei)count, (GLsizei)instancecount, (GLuint)baseinstance);
    }
    inline void UniformMatrix4x3dv(GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glUniformMatrix4x3dv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void Flush(){
        glFlush();
    }
    inline void GetActiveSubroutineName(GLuint program, enum ShaderType shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name){
        glGetActiveSubroutineName((GLuint)program, (GLenum)shadertype, (GLuint)index, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)name);
    }
    inline void UniformSubroutinesuiv(enum ShaderType shadertype, GLsizei count, const GLuint * indices){
        glUniformSubroutinesuiv((GLenum)shadertype, (GLsizei)count, (const GLuint *)indices);
    }
    inline void GetUniformSubroutineuiv(enum ShaderType shadertype, GLint location, GLuint * params){
        glGetUniformSubroutineuiv((GLenum)shadertype, (GLint)location, (GLuint *)params);
    }
    inline void VertexAttribIFormat(GLuint attribindex, GLint size, enum VertexAttribIType type, GLuint relativeoffset){
        glVertexAttribIFormat((GLuint)attribindex, (GLint)size, (GLenum)type, (GLuint)relativeoffset);
    }
    inline void PatchParameterfv(enum PatchParameterName pname, const GLfloat * values){
        glPatchParameterfv((GLenum)pname, (const GLfloat *)values);
    }
    inline void GetCompressedTexImage(enum TextureTarget target, GLint level, void * img){
        glGetCompressedTexImage((GLenum)target, (GLint)level, (void *)img);
    }
    inline void BindTransformFeedback(enum BindTransformFeedbackTarget target, GLuint id){
        glBindTransformFeedback((GLenum)target, (GLuint)id);
    }
    inline void TexImage3D(enum TextureTarget target, GLint level, enum InternalFormat internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, enum PixelFormat format, enum PixelType type, const void * pixels){
        glTexImage3D((GLenum)target, (GLint)level, (GLint)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLint)border, (GLenum)format, (GLenum)type, (const void *)pixels);
    }
    inline void PauseTransformFeedback(){
        glPauseTransformFeedback();
    }
    inline void DrawTransformFeedbackStream(enum PrimitiveType mode, GLuint id, GLuint stream){
        glDrawTransformFeedbackStream((GLenum)mode, (GLuint)id, (GLuint)stream);
    }
    inline void MultiTexCoordP3uiv(enum TextureUnit texture, enum TexCoordPointerType type, const GLuint * coords){
        glMultiTexCoordP3uiv((GLenum)texture, (GLenum)type, (const GLuint *)coords);
    }
    inline void GetQueryIndexediv(enum QueryTarget target, GLuint index, enum QueryParameterName pname, GLint * params){
        glGetQueryIndexediv((GLenum)target, (GLuint)index, (GLenum)pname, (GLint *)params);
    }
    inline void ReleaseShaderCompiler(){
        glReleaseShaderCompiler();
    }
    inline void BindBuffer(enum BufferTargetARB target, GLuint buffer){
        glBindBuffer((GLenum)target, (GLuint)buffer);
    }
    inline void DepthRangef(GLfloat n, GLfloat f){
        glDepthRangef((GLfloat)n, (GLfloat)f);
    }
    inline void GetInteger64v(enum GetPName pname, GLint64 * data){
        glGetInteger64v((GLenum)pname, (GLint64 *)data);
    }
    inline void ShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length){
        glShaderBinary((GLsizei)count, (const GLuint *)shaders, (GLenum)binaryFormat, (const void *)binary, (GLsizei)length);
    }
    inline void GetShaderPrecisionFormat(enum ShaderType shadertype, enum PrecisionType precisiontype, GLint * range, GLint * precision){
        glGetShaderPrecisionFormat((GLenum)shadertype, (GLenum)precisiontype, (GLint *)range, (GLint *)precision);
    }
    inline void VertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w){
        glVertexAttrib4Nub((GLuint)index, (GLubyte)x, (GLubyte)y, (GLubyte)z, (GLubyte)w);
    }
    inline void VertexAttrib4uiv(GLuint index, const GLuint * v){
        glVertexAttrib4uiv((GLuint)index, (const GLuint *)v);
    }
    inline void GetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary){
        glGetProgramBinary((GLuint)program, (GLsizei)bufSize, (GLsizei *)length, (GLenum *)binaryFormat, (void *)binary);
    }
    inline void ProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length){
        glProgramBinary((GLuint)program, (GLenum)binaryFormat, (const void *)binary, (GLsizei)length);
    }
    inline void TexImage2DMultisample(enum TextureTarget target, GLsizei samples, enum InternalFormat internalformat, GLsizei width, GLsizei height, enum Boolean fixedsamplelocations){
        glTexImage2DMultisample((GLenum)target, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLboolean)fixedsamplelocations);
    }
    inline void UseProgramStages(GLuint pipeline, enum UseProgramStageMask stages, GLuint program){
        glUseProgramStages((GLuint)pipeline, (GLbitfield)stages, (GLuint)program);
    }
    inline void ActiveShaderProgram(GLuint pipeline, GLuint program){
        glActiveShaderProgram((GLuint)pipeline, (GLuint)program);
    }
    inline void GetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName){
        glGetActiveUniformBlockName((GLuint)program, (GLuint)uniformBlockIndex, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)uniformBlockName);
    }
    inline void ValidateProgramPipeline(GLuint pipeline){
        glValidateProgramPipeline((GLuint)pipeline);
    }
    inline GLuint CreateShaderProgramv(enum ShaderType type, GLsizei count, const GLchar *const* strings){
        return glCreateShaderProgramv((GLenum)type, (GLsizei)count, (const GLchar *const*)strings);
    }
    inline void BindProgramPipeline(GLuint pipeline){
        glBindProgramPipeline((GLuint)pipeline);
    }
    inline void DeleteProgramPipelines(GLsizei n, const GLuint * pipelines){
        glDeleteProgramPipelines((GLsizei)n, (const GLuint *)pipelines);
    }
    inline void ProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value){
        glProgramUniform3uiv((GLuint)program, (GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void ProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value){
        glProgramUniform4iv((GLuint)program, (GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline void DrawElementsInstancedBaseVertexBaseInstance(enum PrimitiveType mode, GLsizei count, enum DrawElementsType type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance){
        glDrawElementsInstancedBaseVertexBaseInstance((GLenum)mode, (GLsizei)count, (GLenum)type, (const void *)indices, (GLsizei)instancecount, (GLint)basevertex, (GLuint)baseinstance);
    }
    inline void GetProgramPipelineiv(GLuint pipeline, enum PipelineParameterName pname, GLint * params){
        glGetProgramPipelineiv((GLuint)pipeline, (GLenum)pname, (GLint *)params);
    }
    inline void ProgramUniform1i(GLuint program, GLint location, GLint v0){
        glProgramUniform1i((GLuint)program, (GLint)location, (GLint)v0);
    }
    inline void ProgramUniform1f(GLuint program, GLint location, GLfloat v0){
        glProgramUniform1f((GLuint)program, (GLint)location, (GLfloat)v0);
    }
    inline void ProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value){
        glProgramUniform1dv((GLuint)program, (GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline void BeginQuery(enum QueryTarget target, GLuint id){
        glBeginQuery((GLenum)target, (GLuint)id);
    }
    inline void ProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix2fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void ProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1){
        glProgramUniform2i((GLuint)program, (GLint)location, (GLint)v0, (GLint)v1);
    }
    inline void PointParameterfv(enum PointParameterNameARB pname, const GLfloat * params){
        glPointParameterfv((GLenum)pname, (const GLfloat *)params);
    }
    inline void ProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value){
        glProgramUniform2iv((GLuint)program, (GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline void ProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1){
        glProgramUniform2f((GLuint)program, (GLint)location, (GLfloat)v0, (GLfloat)v1);
    }
    inline void SampleCoverage(GLfloat value, enum Boolean invert){
        glSampleCoverage((GLfloat)value, (GLboolean)invert);
    }
    inline void ProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value){
        glProgramUniform2fv((GLuint)program, (GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline void BufferData(enum BufferTargetARB target, GLsizeiptr size, const void * data, enum BufferUsageARB usage){
        glBufferData((GLenum)target, (GLsizeiptr)size, (const void *)data, (GLenum)usage);
    }
    inline void ProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value){
        glProgramUniform2dv((GLuint)program, (GLint)location, (GLsizei)count, (const GLdouble *)value);
    }
    inline void ProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1){
        glProgramUniform2ui((GLuint)program, (GLint)location, (GLuint)v0, (GLuint)v1);
    }
    inline void DispatchComputeIndirect(GLintptr indirect){
        glDispatchComputeIndirect((GLintptr)indirect);
    }
    inline void ClearNamedFramebufferuiv(GLuint framebuffer, enum BufferBit buffer, GLint drawbuffer, const GLuint * value){
        glClearNamedFramebufferuiv((GLuint)framebuffer, (GLenum)buffer, (GLint)drawbuffer, (const GLuint *)value);
    }
    inline void InvalidateSubFramebuffer(enum FramebufferTarget target, GLsizei numAttachments, const InvalidateFramebufferAttachment * attachments, GLint x, GLint y, GLsizei width, GLsizei height){
        glInvalidateSubFramebuffer((GLenum)target, (GLsizei)numAttachments, (const GLenum *)attachments, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);
    }
    inline void ProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value){
        glProgramUniform2uiv((GLuint)program, (GLint)location, (GLsizei)count, (const GLuint *)value);
    }
    inline void ProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value){
        glProgramUniform3iv((GLuint)program, (GLint)location, (GLsizei)count, (const GLint *)value);
    }
    inline void ProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){
        glProgramUniform4f((GLuint)program, (GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2, (GLfloat)v3);
    }
    inline void ProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value){
        glProgramUniform4fv((GLuint)program, (GLint)location, (GLsizei)count, (const GLfloat *)value);
    }
    inline void InvalidateBufferData(GLuint buffer){
        glInvalidateBufferData((GLuint)buffer);
    }
    inline void Uniform1i(GLint location, GLint v0){
        glUniform1i((GLint)location, (GLint)v0);
    }
    inline void ProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3){
        glProgramUniform4d((GLuint)program, (GLint)location, (GLdouble)v0, (GLdouble)v1, (GLdouble)v2, (GLdouble)v3);
    }
    inline GLenum GetGraphicsResetStatus(){
        return glGetGraphicsResetStatus();
    }
    inline void CreateFramebuffers(GLsizei n, GLuint * framebuffers){
        glCreateFramebuffers((GLsizei)n, (GLuint *)framebuffers);
    }
    inline void ProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix4fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void ProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix2dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline GLuint GetProgramResourceIndex(GLuint program, enum ProgramInterface programInterface, const GLchar * name){
        return glGetProgramResourceIndex((GLuint)program, (GLenum)programInterface, (const GLchar *)name);
    }
    inline void ProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix4dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void ClearStencil(GLint s){
        glClearStencil((GLint)s);
    }
    inline void VertexAttribDivisor(GLuint index, GLuint divisor){
        glVertexAttribDivisor((GLuint)index, (GLuint)divisor);
    }
    inline void ProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix3x2fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void * MapBuffer(enum BufferTargetARB target, enum BufferAccessARB access){
        return glMapBuffer((GLenum)target, (GLenum)access);
    }
    inline void ProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glProgramUniformMatrix4x3fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void ProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix2x3dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void GetNamedBufferPointerv(GLuint buffer, enum BufferPointerNameARB pname, void ** params){
        glGetNamedBufferPointerv((GLuint)buffer, (GLenum)pname, (void **)params);
    }
    inline void ProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix3x2dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void ProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix3x4dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void EndQueryIndexed(enum QueryTarget target, GLuint index){
        glEndQueryIndexed((GLenum)target, (GLuint)index);
    }
    inline void ProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, enum Boolean transpose, const GLdouble * value){
        glProgramUniformMatrix4x3dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLdouble *)value);
    }
    inline void PointParameterf(enum PointParameterNameARB pname, GLfloat param){
        glPointParameterf((GLenum)pname, (GLfloat)param);
    }
    inline void VertexAttribL1d(GLuint index, GLdouble x){
        glVertexAttribL1d((GLuint)index, (GLdouble)x);
    }
    inline void VertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z){
        glVertexAttribL3d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z);
    }
    inline void TextureParameterIiv(GLuint texture, enum TextureParameterName pname, const GLint * params){
        glTextureParameterIiv((GLuint)texture, (GLenum)pname, (const GLint *)params);
    }
    inline void BindTextures(GLuint first, GLsizei count, const GLuint * textures){
        glBindTextures((GLuint)first, (GLsizei)count, (const GLuint *)textures);
    }
    inline void VertexAttribLFormat(GLuint attribindex, GLint size, enum VertexAttribLType type, GLuint relativeoffset){
        glVertexAttribLFormat((GLuint)attribindex, (GLint)size, (GLenum)type, (GLuint)relativeoffset);
    }
    inline void VertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){
        glVertexAttribL4d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z, (GLdouble)w);
    }
    inline void ProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2){
        glProgramUniform3ui((GLuint)program, (GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2);
    }
    inline void VertexAttribL2dv(GLuint index, const GLdouble * v){
        glVertexAttribL2dv((GLuint)index, (const GLdouble *)v);
    }
    inline void VertexAttribL3dv(GLuint index, const GLdouble * v){
        glVertexAttribL3dv((GLuint)index, (const GLdouble *)v);
    }
    inline void VertexAttribL4dv(GLuint index, const GLdouble * v){
        glVertexAttribL4dv((GLuint)index, (const GLdouble *)v);
    }
    inline void DrawTransformFeedbackStreamInstanced(enum PrimitiveType mode, GLuint id, GLuint stream, GLsizei instancecount){
        glDrawTransformFeedbackStreamInstanced((GLenum)mode, (GLuint)id, (GLuint)stream, (GLsizei)instancecount);
    }
    inline void GetVertexAttribLdv(GLuint index, enum VertexAttribEnum pname, GLdouble * params){
        glGetVertexAttribLdv((GLuint)index, (GLenum)pname, (GLdouble *)params);
    }
    inline void BufferStorage(enum BufferStorageTarget target, GLsizeiptr size, const void * data, enum BufferStorageMask flags){
        glBufferStorage((GLenum)target, (GLsizeiptr)size, (const void *)data, (GLbitfield)flags);
    }
    inline void ViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h){
        glViewportIndexedf((GLuint)index, (GLfloat)x, (GLfloat)y, (GLfloat)w, (GLfloat)h);
    }
    inline void ViewportIndexedfv(GLuint index, const GLfloat * v){
        glViewportIndexedfv((GLuint)index, (const GLfloat *)v);
    }
    inline void NamedRenderbufferStorage(GLuint renderbuffer, enum InternalFormat internalformat, GLsizei width, GLsizei height){
        glNamedRenderbufferStorage((GLuint)renderbuffer, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);
    }
    inline void ScissorArrayv(GLuint first, GLsizei count, const GLint * v){
        glScissorArrayv((GLuint)first, (GLsizei)count, (const GLint *)v);
    }
    inline void GetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices){
        glGetUniformIndices((GLuint)program, (GLsizei)uniformCount, (const GLchar *const*)uniformNames, (GLuint *)uniformIndices);
    }
    inline void DepthRangeIndexed(GLuint index, GLdouble n, GLdouble f){
        glDepthRangeIndexed((GLuint)index, (GLdouble)n, (GLdouble)f);
    }
    inline void MemoryBarrierByRegion(enum MemoryBarrierMask barriers){
        glMemoryBarrierByRegion((GLbitfield)barriers);
    }
    inline void UniformMatrix2x4fv(GLint location, GLsizei count, enum Boolean transpose, const GLfloat * value){
        glUniformMatrix2x4fv((GLint)location, (GLsizei)count, (GLboolean)transpose, (const GLfloat *)value);
    }
    inline void GetVertexAttribfv(GLuint index, enum VertexAttribPropertyARB pname, GLfloat * params){
        glGetVertexAttribfv((GLuint)index, (GLenum)pname, (GLfloat *)params);
    }
    inline void ScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height){
        glScissorIndexed((GLuint)index, (GLint)left, (GLint)bottom, (GLsizei)width, (GLsizei)height);
    }
    inline void DrawElementsInstancedBaseInstance(enum PrimitiveType mode, GLsizei count, enum DrawElementsType type, const void * indices, GLsizei instancecount, GLuint baseinstance){
        glDrawElementsInstancedBaseInstance((GLenum)mode, (GLsizei)count, (GLenum)type, (const void *)indices, (GLsizei)instancecount, (GLuint)baseinstance);
    }
    inline void BindImageTexture(GLuint unit, GLuint texture, GLint level, enum Boolean layered, GLint layer, enum BufferAccessARB access, enum InternalFormat format){
        glBindImageTexture((GLuint)unit, (GLuint)texture, (GLint)level, (GLboolean)layered, (GLint)layer, (GLenum)access, (GLenum)format);
    }
    inline void MemoryBarrier(enum MemoryBarrierMask barriers){
        glMemoryBarrier((GLbitfield)barriers);
    }
    inline void TexStorage2D(enum TextureTarget target, GLsizei levels, enum SizedInternalFormat internalformat, GLsizei width, GLsizei height){
        glTexStorage2D((GLenum)target, (GLsizei)levels, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);
    }
    inline void GetInternalformati64v(enum TextureTarget target, enum InternalFormat internalformat, enum InternalFormatPName pname, GLsizei count, GLint64 * params){
        glGetInternalformati64v((GLenum)target, (GLenum)internalformat, (GLenum)pname, (GLsizei)count, (GLint64 *)params);
    }
    inline void GenerateMipmap(enum TextureTarget target){
        glGenerateMipmap((GLenum)target);
    }
    inline void InvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth){
        glInvalidateTexSubImage((GLuint)texture, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth);
    }
    inline void InvalidateFramebuffer(enum FramebufferTarget target, GLsizei numAttachments, const InvalidateFramebufferAttachment * attachments){
        glInvalidateFramebuffer((GLenum)target, (GLsizei)numAttachments, (const GLenum *)attachments);
    }
    inline void GetProgramResourceName(GLuint program, enum ProgramInterface programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name){
        glGetProgramResourceName((GLuint)program, (GLenum)programInterface, (GLuint)index, (GLsizei)bufSize, (GLsizei *)length, (GLchar *)name);
    }
    inline void GetProgramResourceiv(GLuint program, enum ProgramInterface programInterface, GLuint index, GLsizei propCount, const ProgramResourceProperty * props, GLsizei count, GLsizei * length, GLint * params){
        glGetProgramResourceiv((GLuint)program, (GLenum)programInterface, (GLuint)index, (GLsizei)propCount, (const GLenum *)props, (GLsizei)count, (GLsizei *)length, (GLint *)params);
    }
}
